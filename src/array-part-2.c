#include<stdio.h>

// Function for printing array
void print_array(int arr[], int array_size) {

    printf("Array printing...\n");

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < array_size; i++) {

        printf("arr[%d]: %d\n", i, arr[i]);

    }

}



int main() {

    // Declaring & Initializing array
    int arr_1[4] = {1, 2, 3, 4};

    // Accessing all elements need a loop
    int arr_1_size = sizeof(arr_1) / sizeof(int);
    print_array(arr_1, arr_1_size);


    // Declaring & Initializing array with 0 while declaration
    int arr_2[15] = {0};

    // Accessing all elements need a loop
    int arr_2_size = sizeof(arr_2) / sizeof(int);
    print_array(arr_2, arr_2_size);


    // What if we want to initialize with 1 not 0??
    // In that case we will initialize only the first index.
    // Others will remain 0
    int arr_3[15] = {1};

    // Accessing all elements need a loop
    int arr_3_size = sizeof(arr_3) / sizeof(int);
    print_array(arr_3, arr_3_size);
 

    // Declaring & Initializing first 2 index while declaration
    int arr_4[10] = {2, 3};

    // Accessing all elements need a loop
    int arr_4_size = sizeof(arr_4) / sizeof(int);
    print_array(arr_4, arr_4_size);
    
    


    return 0;
}