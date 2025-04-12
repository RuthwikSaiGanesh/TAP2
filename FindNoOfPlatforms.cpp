/*13. the trains   t1      t2        t3      t4      t5       t6		
 arrival time:  9.00    9.40     9.50   11.00    15.00   18.00
 departure time:9.10    12.00    11.20  11.30    19.00   20.00
 find the number of platforms required */


 #include<iostream>
 #include<algorithm>
 using namespace std;


    int FnoP(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);
        int platforms =0, maxPlatforms = 0;
        int i = 0, j = 0;
        while(i<n && j<n)
        {
            if(arr[i] <= dep[j])
            {
                platforms++;
                i++;
            }
            else
            {
                platforms--;
                j++;
            }
            maxPlatforms = max(maxPlatforms, platforms);
        }
        return maxPlatforms;
    }

    int main()
    {
        int arr[] = {900, 940, 950, 1100, 1500, 1800};
        int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<"Minimum no. of platforms needed: "<< FnoP(arr, dep,n)<<endl;
    }
 