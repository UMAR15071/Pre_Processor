void greet();                   // Function with no return value
int add(int a, int b);          // Function that returns an integer
void print_message(char* message); // Function that takes a string parameter

int main() {
    // Calling functions from main
    greet(); // Function with no parameters or return value

    int result = add(5, 3); // Function that returns an integer
    printf("Sum of 5 and 3 is: %d\n", result);

    print_message("This is a user-defined message!"); // Function with a string parameter

    return 0;
}

// Function Definitions

// Function with no return value
void greet() {
    printf("Hello! Welcome to the C program.\n");
}

// Function that returns an integer
int add(int a, int b) {
    return a + b;
}

// Function that takes a string as an argument and prints it
void print_message(char* message) {
    printf("%s\n", message);
}
