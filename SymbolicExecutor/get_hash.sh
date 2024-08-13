#!/bin/bash

file_path="$1"
if [ -f "$file_path" ]; then
    sha1sum $file_path | awk '{ print $1 }'
else
    echo "File does not exist"
fi