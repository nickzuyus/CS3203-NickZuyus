#include <vector>
#include <iostream>

int sumArray(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5 ; i++) {
        sum += arr[i];
    }
    return sum;
}

int productArray(int arr[]){
    int sum = 1;
      for (int i = 0; i < 5 ; i++) {
        sum = sum * arr[i];
    }
    return sum;
}

int main(){

int size;
std:: cout << "enter array size";
std::cin >> size;
    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Input the elements of the array
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Calculate the sum of the array elements
    std::cout << "Enter the array numbers";
    int totalSum = sumArray(arr);
    
    // Output the result
    std::cout << "Sum of the integers in the array: " << totalSum << std::endl;
    
    std:: cout << "Product of the array is " << productArray(arr) << std::endl;


    // Deallocate memory for the array
    delete[] arr;

    return 0;
}








