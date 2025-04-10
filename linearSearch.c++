#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout<<"ElementFound at position"<< i+1; 
            return;
        }
    }
    cout<<"Element Not Found";
}

int main() {
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> key;

    linearSearch(arr, size, key);

    return 0;
}