#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to perform Counting Sort based on digit place (1s, 10s, 100s, etc.)
void countSort(int arr[], int n, int exponent) {
    int* output = new int[n]; // Output array
    int count[10] = {0}; // Count array for digits 0-9

    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exponent) % 10;
        count[digit]++;
    }

    // Change count[i] so that it contains the actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array from end to maintain stability
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exponent) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the sorted elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] output; // Free dynamically allocated memory
}

// Function to perform Radix Sort on the array.
void radixSort(int arr[], int n) {
    // Find the maximum number to know the number of digits
    int maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
    }

    // Apply counting sort to each digit place
    for (int exponent = 1; maxNum / exponent > 0; exponent *= 10) {
        countSort(arr, n, exponent);
    }
}

// Function to initiate the Radix Sort process.
void processRadixSort(int arr[], int n) {
    radixSort(arr, n);
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to dynamically allocate an array and fill it with random values.
void fillDynamicArrayWithRandomValues(int** arr, int* n) {
    cout << "Enter the size of the array: ";
    cin >> *n;
    *arr = new int[*n];
    srand(time(0)); // Seed for random number generation
    for (int i = 0; i < *n; i++) {
        (*arr)[i] = rand() % 1000; // Fill with random numbers between 0 and 999
    }
}

int main() {
    int* arr;
    int n;
    fillDynamicArrayWithRandomValues(&arr, &n);
    cout << "Unsorted array: ";
    displayArray(arr, n);
    processRadixSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr, n);
    delete[] arr; // Deallocate dynamically allocated memory
    return 0;
}
