#include <iostream>
#include <vector>
#include <algorithm> // for max function
#include <stack> // for stack
using namespace std;

class Solution {
    public:
        int trap(vector<int>& height)
        {
            int left =0;
            int right = height.size() -1;
            int leftMax = height[left];
            int rightMax= height[right];
            int water =0;
    
            while(left < right)
            {
                if(leftMax <rightMax)
                {
                    left++;
                    leftMax =max(leftMax, height[left]);
                    water += leftMax -height[left];
                }
                else
                {
                    right--;
                    rightMax =max(rightMax,height[right]);
                    water += rightMax - height[right];
                }
            }
            return water;
        }

    };
    int main()
    {
        //user input
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        vector<int> height(n);
        cout << "Enter the elements of the array: ";
        for(int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        Solution s;
        int result = s.trap(height);
        cout << "The amount of water that can be trapped is: " << result << endl;
        return 0;
    }

    //explaining each line:
    // 1. Include necessary libraries: iostream for input/output, vector for dynamic arrays, algorithm for max function, and stack for stack data structure.
    // 2. Define the Solution class which contains the trap function.
    // 3. The trap function takes a vector of integers (height) as input and returns an integer representing the amount of water that can be trapped.
    // 4. Initialize left and right pointers to the start and end of the height vector, respectively.