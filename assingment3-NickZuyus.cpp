#include <vector>
#include <iostream>

int sumArray(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5 ; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){

int size;

    // Dynamically allocate memory for the array
    int* arr = new int[5];

    // Input the elements of the array
    for (int i = 0; i < 5; i++) {
        arr[i] = 5;
    }

    // Calculate the sum of the array elements
    int totalSum = sumArray(arr);

    // Output the result
    std::cout << "Sum of the integers in the array: " << totalSum << std::endl;

    // Deallocate memory for the array
    delete[] arr;

    return 0;
}








