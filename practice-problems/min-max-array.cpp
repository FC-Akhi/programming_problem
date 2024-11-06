#include<iostream>

using namespace std;


void getMin(int arr1[], int arr1_size) {

    int min_value = INT32_MAX;

    for (unsigned int i = 0; i < arr1_size; i++)
        if (min_value > arr1[i])
            min_value = arr1[i];

    printf("Min: %d", min_value);

}


void getMax(int arr1[], int arr1_size) {

    int max_value = INT32_MIN;

    for (unsigned int i = 0; i < arr1_size; i++)
        if (max_value < arr1[i])
            max_value = arr1[i];

    printf("Max: %d", max_value);

}


int main() {

    // Declare and Initialize array
    int arr1[] = {5, 8, 2, 10, 1};

    // Get the array size and store in a variable
    int arr1_size = sizeof(arr1) / sizeof(int);

    // Get max value from array
    getMax(arr1, arr1_size);

    printf("\n");

    // Get min value from array
    getMin(arr1, arr1_size);



    return 0;

}

