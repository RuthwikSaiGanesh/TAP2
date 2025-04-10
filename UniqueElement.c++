/* write a program to print unique element from an array*/

#include <iostream>
using namespace std;

void getUniqueElement(int arr[], int size)   //use XOR operator to find unique element
{
    int unique = 0;                          // Initialize unique to 0
    for (int i = 0; i < size; i++) {        // Traverse the array
        unique =unique^ arr[i];                   // XOR each element with unique
    }
    cout << "Unique element is: " << unique << endl; 
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;                            // Input the size of the array

    int arr[size];                          // Declare an array of the given size
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {       // Input the elements of the array
        cin >> arr[i];
    }

    getUniqueElement(arr, size);           // Call the function to find unique element

    return 0;
}
