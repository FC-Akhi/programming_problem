#include<stdio.h>


int main(){


    int arr_1[4] = {1, 2, 3, 4};
    // when we are trying to see address of simple array,
    // we use %p format specifier.
    printf("%p\n", arr_1);
    // Accessing first element
    printf("%d\n", *arr_1);
    // Print using index
    printf("%d\n", arr_1[2]);
    // Accessing index which is not initialize
    // Will show garbage value
    printf("%d\n", arr_1[25]);

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < 4; i++) {

        printf("arr_1[%d]: %d\n", i, arr_1[i]);

    }


    // Initializing too long array with 0 while declaration
    int arr_2[15] = {0};

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < 15; i++) {

        printf("arr_2[%d]: %d\n", i, arr_2[i]);

    }

    // What if we want to initialize with 1 not 0??
    // In that case we will initialize only the first index.
    // Others will remain 0
    int arr_3[15] = {1};

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < 15; i++) {

        printf("arr_3[%d]: %d\n", i, arr_3[i]);

    }

    // Inistialize first 2 index while declaration
    int arr_4[10] = {2, 3};
    
    // Accessing all elements need a loop
    for(unsigned int i = 0; i < 10; i++) {

        printf("arr_4[%d]: %d\n", i, arr_4[i]);

    }


    return 0;
}