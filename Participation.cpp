/*	Activity selection problem:
	you are given N number activities
	Start[] containing start time of each activity
	Finish[] containing end time of each activity

	output: max number of non overalapping activities    */

    //logic: sort the activities based on their finish time.
    // select the first activity and then select the next activity whose start time is >= to the finish time of the last selected activity.
    #include<iostream>
    #include<algorithm>
    using namespace std;
    
    struct Activity
    {
        int start;
        int finish;
    };
    bool activityCompare(Activity a, Activity b)
    {
        return a.finish < b.finish;
    }
    int maxActivities(Activity arr[], int n)
    {
        sort(arr, arr+n, activityCompare);
        int count = 1;
        int lastFinish = arr[0].finish;
        for(int i=1; i<n; i++)
        {
            if(arr[i].start >= lastFinish)
            {
                count++;
                lastFinish = arr[i].finish;
            }
        }
        return count;
    }
    int main()
    {
        Activity arr[] = {{1,2}, {3,4}, {0,6}, {5,7}, {8,9} , {5,9}};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<"Max no. of activities: "<<maxActivities(arr, n)<<endl;
        return 0;
    }