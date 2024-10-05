#!/bin/bash
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)" #Get the directory of the script <sikraken_install>/bin
SIKRAKEN_INSTALL_DIR="$SCRIPT_DIR/.."
VERSION_FILE="$SIKRAKEN_INSTALL_DIR/bin/version.txt"

if [ $1 == "-v" ]; then
    if [[ -f "$VERSION_FILE" ]]; then
        version=$(head -n 1 "$VERSION_FILE") # Read the first line of version.txt
        echo "$version"
        exit 0
    else
        echo "Error: $VERSION_FILE not found."
        exit 1
    fi
fi

# top-level command for testcomp: parses and generate test inputs for one file file foo.c

echo "Sikraken wrapper sikraken.sh says: SIKRAKEN_INSTALL_DIR is $SIKRAKEN_INSTALL_DIR"

# <relative_dir> is relative to <SIKRAKEN_INSTALL_DIR>

# Ensure we have exactly 4 arguments
if [ $# -ne 4 ]; then
    echo "Sikraken wrapper sikraken.sh says usage (respect the order): $0 <debug|release> budget[<Seconds>]|regression[<Restarts>, <Tries>] <-m32|-m64> <relative_dir>/<file_name.c>"
    exit 1
fi

debug_mode="$1"
algo="$2"
algo=${algo/\[/\(}  # Replace the first occurrence of [ with (
algo=${algo/\]/\)}  # Replace the first occurrence of ] with )

data_model="$3"                         #e.g. -m32
if [ "$data_model" == "-m32" ]; then
        testcov_data_model="-32"
    elif [ "$data_model" == "-m64" ]; then
        testcov_data_model="-64"
    else
        echo "Sikraken wrapper ERROR: Unsupported data model: $data_model"
        exit 1
fi

rel_path_c_file="$4"                    #e.g. ./../SampleCode/atry_bitwise.c

full_path_c_file="$SIKRAKEN_INSTALL_DIR/$rel_path_c_file"    #e.g. /home/chris/Sikraken/SampleCode/atry_bitwise.c

file_name_no_ext=$(basename "$rel_path_c_file" .c)

output_dir="$SIKRAKEN_INSTALL_DIR/sikraken_output/$file_name_no_ext"

mkdir -p $output_dir

# Preprocess the file using gcc
gcc -E -P "$full_path_c_file" $data_model -o "$output_dir/$file_name_no_ext.i"

# Check if gcc was successful
if [ $? -ne 0 ]; then
    echo "Sikraken wrapper Error: gcc failed on gcc -E -P "$full_path_c_file" $data_model -o "$output_dir/$file_name_no_ext.i""
    exit 1
fi


# Run the parser
$SIKRAKEN_INSTALL_DIR/bin//sikraken_parser.exe $data_model -p$output_dir $file_name_no_ext

# Check if sikraken_parser was successful
if [ $? -ne 0 ]; then
    echo "Sikraken wrapper Error: sikraken_parser failed on $SIKRAKEN_INSTALL_DIR/bin//sikraken_parser.exe $data_model -p$output_dir $file_name_no_ext"
    exit 1
fi

echo "Sikraken wrapper Successfully preprocessed $rel_path_c_file and ran sikraken_parser."
if [[ $algo =~ ^budget\([0-9]+\)$ ]]; then
  seconds="${algo//[!0-9]/}"
  echo "Sikraken wrapper says: Please wait $seconds seconds for Sikraken to complete"
else
  echo "Sikraken wrapper says: Please wait for Sikraken to complete its $algo search strategy" 
fi

# Call the symbolic executor via ECLiPSe
eclipse_call="se_main(['$SIKRAKEN_INSTALL_DIR', '$output_dir', '$file_name_no_ext', main, '$debug_mode', testcomp, '$data_model', $algo])"
$SIKRAKEN_INSTALL_DIR/eclipse/bin/x86_64_linux/eclipse -f $SIKRAKEN_INSTALL_DIR/SymbolicExecutor/se_main.pl -e "$eclipse_call" -g 12G -l 1G #i.e. 13G leaving 2G margin for other things...

# check if test generation was successful
if [ $? -ne 0 ]; then
    echo "Sikraken wrapper ERROR: call to ECLiPSe $eclipse_call failed"
    exit 1
else
    echo "Sikraken wrapper generated test inputs for $file_name_no_ext in $SIKRAKEN_INSTALL_DIR/sikraken_output/$file_name_no_ext/"
    echo "Sikraken wrapper says: run the tests with: testcov --no-isolation $testcov_data_model --test-suite ./sikraken_output/$file_name_no_ext/test-suite.zip $3"
fi