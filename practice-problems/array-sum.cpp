#include<iostream>

void init_arr(int arr[], int arr_size) {

    for (unsigned int i = 0; i < arr_size; i++) {

        std::cin >> arr[i];

    }

}

// Function for printing array
void print_arr(int arr[], int arr_size) {

    for (unsigned int i = 0; i < arr_size; i++) {

        printf("%d ", arr[i]);

    }
    printf("\n");

}


int sum_arr(int arr[], int arr_size) {

    int sum = 0;
    
    for (unsigned int i = 0; i < arr_size; i++) {

        sum = sum + arr[i];

    }
            
    return sum;

}


int main() {

    // Take array size from user
    int arr_size;
    std::cin >> arr_size;

    // Declare array
    int arr[arr_size];

    // Initialize array
    init_arr(arr, arr_size);

    // Print array
    print_arr(arr, arr_size);

    // Sum array
    int sum = sum_arr(arr, arr_size);

    // Print the sum
    printf("Sum: %d\n", sum);
    

    return 0;

}