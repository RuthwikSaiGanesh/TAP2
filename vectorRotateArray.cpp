
	/*rotate a vector k times to the left or right*/
	#include <iostream>
	#include <vector>
	using namespace std;
	
	void rotateLeft(vector<int>& arr, int k) 
	{
		int n = arr.size(),mid=n/2;
		for (int i = mid; i <n; i++) 
		{
			cout<<arr[i]<<" ";
		}
		for(int i = 0; i < mid; i++) 
		{
			cout<<arr[i]<<" ";
		}
	}
	
	int main() 
	{
		vector<int> arr = {1, 2, 3, 4, 5};
		int k = 2; // Number of positions to rotate
		rotateLeft(arr, k); // Rotate the vector to the left by k positions
		return 0;
	}