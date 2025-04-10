//search an element using 2D matrix
#include<iostream
using namespace std;

void SearchIn2dMatrix(int arr[][4], int target, int row, int col) {
    for (int i = 0; i < row; i++) { // Traverse through each row
        for (int j = 0; j < col; j++) { // Traverse through each column
            if (arr[i][j] == target) { // Check if the current element is equal to the target
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return;
            }
        }
    }
    cout << "Element not found" << endl; // If the element is not found in the matrix
}
int main() {
    int arr[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} }; // Initialize a 2D matrix
    int target = 7; // Element to search for
    SearchIn2dMatrix(arr, target, 4, 4); // Call the function to search for the element
    return 0;
}