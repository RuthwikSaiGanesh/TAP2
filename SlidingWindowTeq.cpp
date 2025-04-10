/* write a prog in c++ to find maximum sum of sub array of K_th elements in an array */

#include <iostream>
using namespace std;
void maxSumSubArray(int arr[], int n, int k) {
    if (k > n) {
        cout << "Invalid input: k is larger than the size of the array." << endl;
        return;
    }

    int max_sum = 0, current_sum = 0;

    // Calculate the sum of the first k elements
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    // Slide the window over the rest of the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k]; // Add next element and remove the first element of the previous window
        max_sum = max(max_sum, current_sum); // Update max_sum if current_sum is greater
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << max_sum << endl;
}
int main()                    //user input
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the size of the subarray (k): ";
    cin >> k;

    maxSumSubArray(arr, n, k); // Call the function to find maximum sum of subarray of size k

    return 0;
}

//time complexity: O(n)
//space complexity: O(1)
