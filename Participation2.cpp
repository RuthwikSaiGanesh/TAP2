//another way to solve activity selection problem
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool activityCompare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // Sort by finish time
}
int activitySelection(vector<int> start, vector<int>finish) 
{
    int n =start.size();
    vector<pair<int,int>> activities;
    for(int i=0; i<n; i++)
    {
        activities.push_back(make_pair(start[i], finish[i]));
    }
    sort(activities.begin(), activities.end(), activityCompare);
    int count =1;
    int lastFinish = activities[0].second;
    for(int i =1; i<n; i++)
    {
        if(activities[i].first >= lastFinish)
        {
            count++;
            lastFinish =  activities[i].second;
        }

    }
    return count;
}

int main()
{
    vector<int> start={1, 3, 0, 5, 8, 5};
    vector<int> finish={2, 4, 6, 7, 9, 9};
    
    cout<<"Max no. of actitivities: "<<activitySelection(start, finish)<<endl;
    return 0;
}

    
//time complexity: O(nlogn) for sorting + O(n) for selection = O(nlogn)
//space complexity: O(n) for storing activities in vector