
// Problem(Link: https://www.hackerearth.com/problem/algorithm/linear-search-2)
// You are given an array A of size N. You are given number K which you have to search in the array and return the index of that element. If there are multiple matches then tell the index of the first matched element. If there is no match, print -1.

// Input
// First line of input contains two value ,N and K, where N is the size of the array and K is the key to be searched. Next N lines consist elements of array as shown in sample input

// Output
// Print the index of first appearance of element (if found) else -1.

// Constraints
// 1 ≤ N ≤ 100000
// 0 ≤ A[i] ≤ 10^9

// 'long int' is used for storing number in the range of 10^9

// Sample Input
// 5 66
// 11
// 33
// 55
// 66
// 77

#include<iostream>

using namespace std;


// Function defination
void linearSearch(long int A[], int N, int K) {

    bool found = false;
    int index = 0;

    // Loop through array to search K value
    for (unsigned int i = 0; i < N; i++)

        if (A[i] == K){

            found = true;
            index = i;
            break;

        }

    
    // If value found
    if (found == true)
        printf("%d", index);

    // If value not found
    else
        printf("-1");

}


int main() {

    // Declare variable for the array size need and take user input
    int N;
    std::cin >> N;

    // Declare variable for the value need to search and take user input
    int K;
    std::cin >> K;

    // Declare array
    long int A[N];

    // Initialize array
    for (int i = 0; i < N; i++)
        std::cin >> A[i];

    // Search value from array
    linearSearch(A, N, K);


    return 0;

}

