#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct FunctionEntry {
    char* function_name;            // Name of the function being called
    bool user_defined;              // 1 if user-defined, 0 if external
    int* branch_numbers;            // Array to store branch numbers
    int branch_count;               // Number of branch numbers stored
    struct FunctionEntry* next;     // Pointer to the next function entry (linked list)
} FunctionEntry;

FunctionEntry* function_list_head = NULL; 

FunctionEntry* insert_function(char* function_name){
    FunctionEntry* new_entry = (FunctionEntry*)malloc(sizeof(FunctionEntry));
    new_entry->function_name = strdup(function_name);  
    new_entry->user_defined = false;
    new_entry->branch_numbers = NULL;
    new_entry->branch_count = 0;
    new_entry->next = function_list_head;  
    function_list_head = new_entry;
    return new_entry;
}

void set_to_user_define(char* function_name){
    FunctionEntry *temp = function_list_head;
    while(temp != NULL){
        if(strcmp(function_name, temp->function_name) == 0){
            temp->user_defined = true;
            return;
        }
        temp = temp->next;
    }
    FunctionEntry* new_entry = insert_function(function_name);
    new_entry->user_defined = true;
}

void add_branch_number(char* function_name, int branch_num) {
    FunctionEntry *temp = function_list_head;

    // Search for the function in the list
    while (temp != NULL) {
        if (strcmp(function_name, temp->function_name) == 0) {
            // Found the function, reallocate memory to add a new branch number
            temp->branch_numbers = (int*)realloc(temp->branch_numbers, (temp->branch_count + 1) * sizeof(int));
            temp->branch_numbers[temp->branch_count] = branch_num;
            temp->branch_count++;
            return;
        }
        temp = temp->next;
    }

    // If function not found, insert it and add the branch number
    FunctionEntry* new_entry = insert_function(function_name);
    new_entry->branch_numbers = (int*)malloc(sizeof(int));
    new_entry->branch_numbers[0] = branch_num;
    new_entry->branch_count = 1;
}
