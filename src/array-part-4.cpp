#include<iostream>

using namespace std;



void updateArray(int arr1[], int arr1_size) {

    printf("Array inside updateArray\n");
    for (unsigned int i = 0; i < arr1_size; i++)
        printf("%d ", arr1[i]);


    printf("\nArray after update inside updateArray\n");
    arr1[0] = 5689;

    for (unsigned int i = 0; i < arr1_size; i++)
        printf("%d ", arr1[i]);

}


int main() {

    // Declare and Initialize array
    int arr1[] = {5, 8, 2, 10, 1};

    // Get the array size and store in a variable
    int arr1_size = sizeof(arr1) / sizeof(int);

    // Get max value from array
    updateArray(arr1, arr1_size);

    printf("\nArray inside main after updateArray function call\n");
    for (unsigned int i = 0; i < arr1_size; i++)
        printf("%d ", arr1[i]);


    return 0;

}

