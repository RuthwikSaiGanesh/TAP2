// Count Sort Algorithm
#include <iostream>
#include <vector>
using namespace std;

void CountSort(vector<int>& arr)
{
    int maxElement = *max_element(arr.begin(), arr.end()); // Find the maximum element in the array
    vector<int> count(maxElement + 1, 0); // Create a count array initialized to 0 and then till maxElement[ maxElement+1 because of 0 index] 

    // Count the occurrences of each element in the original array
   for(int num : arr) {
        count[num]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for(int i = 0; i <= maxElement; i++) {
        while(count[i]--) { // While there are occurrences of the element
            arr[index++] = i; // Place the element in the sorted array
           
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1}; // Example array to be sorted
    CountSort(arr); // Call the CountSort function

    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " "; // Print the sorted array
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n + k), where n is the number of elements in the array and k is the range of the input (maxElement).
