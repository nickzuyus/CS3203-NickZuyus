#include <vector>
#include <iostream>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void reverseArray(int arr[], int length) {
   for(int i = length; i > 0; i--){
    std::cout << arr[i] << " ";
   }
   std::cout << std::endl;
    
}

int productArray(int arr[], int size){
    int sum = 1;
      for (int i = 0; i <  size; i++) {
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
     std::cout << "Enter the array numbers";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
int* rev = new int[size];
    // Calculate the sum of the array elements
   
    int totalSum = sumArray(arr, size);
    int product = productArray(arr, size);
    // Output the result
    std::cout << "Sum of the integers in the array: " << totalSum << std::endl;
    
    std:: cout << "Product of the array is " << product << std::endl;

    std:: cout << " the reversed array is " << std :: endl;

    reverseArray(arr, size);

    // Deallocate memory for the array
    delete[] arr;

    return 0;
}








