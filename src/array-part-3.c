#include<stdio.h>

#define ARR_1_SIZE 4


// Initialize array
void initialize_array(int arr[], int arr_size) {

    printf("Array initialise...\n");

    for(unsigned int i = 0; i < arr_size; i++) {

        arr[i] = i;

    }

}


// Function for printing array
void print_array(int arr[]) {

    printf("Array printing...\n");

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < ARR_1_SIZE; i++) {

        printf("arr[%d]: %d\n", i, arr[i]);

    }

}



int main() {

    // Can we Declaring size of array first??
    // int arr_1_size = 4; is not treated as a compile-time by the compiler in this context, 
    // meaning arr_1 is considered a variable-length array. 
    // In C, variable-length arrays (VLAs) cannot be initialized with an initializer list.
    // int arr_1_size = 4;
    // int arr_0[arr_1_size] = {1, 2, 3, 4}; // error: variable-sized object may not be initialized

    // There are two ways to declare array size before declaring array
    // 1. Using #define directive
    // Declaring & Initializing array
    int arr_1[ARR_1_SIZE] = {1, 2, 3, 4};

    // Printing all elements in array
    // No need to pass array size if it is defined as directives
    print_array(arr_1);

    // 2. Declare size and then declare array with out initializing in same line
    int arr_size = 4;

    // Declaring array
    int arr_2[arr_size];

    // Initializing array
    initialize_array(arr_2, arr_size);




    return 0;
}