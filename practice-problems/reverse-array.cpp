#include<iostream>

using namespace std;

void reverseArray(int arr[], int arr_size) {

    int tmp = 0;

    for(unsigned int i = 0, j = (arr_size - 1); i < arr_size; i++, j--) { 

        if(i < j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[i] = tmp;

        }
    
    }
            

}

// Function for printing array
void print_array(int arr[], int arr_size) {

    
    printf("[");

    // Accessing all elements need a loop
    for(unsigned int i = 0; i < arr_size; i++) {

        printf("%d ", arr[i]);

    }

    printf("]");

}


int main() {

    int arr[] = {1, 2, 3, 4};

    int arr_size =  sizeof(arr) / sizeof(int);

    reverseArray(arr, arr_size);

    print_array(arr, arr_size);

    return 0;

}