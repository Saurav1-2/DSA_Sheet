#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min=INT_MAX;
    int max=INT_MIN;
};
//Method 1: Sorting the array
//Pair Min_Max(int *arr,int n)
//{
//    sort(arr,arr+n);
//    Pair ans;
//    ans.min = arr[0];
//    ans.max=arr[n-1];
//
//    return ans;
//
//}

//Method 2: Linear search

Pair Min_Max(int *arr,int n)
{
    Pair minmax;
    if(n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }

        if(arr[0]>arr[1])
        {
            minmax.min=arr[1];
            minmax.max=arr[0];
        }
        else
        {
            minmax.min=arr[0];
            minmax.max=arr[1];
        }


        for(int i=2;i<n;i++)
        {
            if(arr[i]>minmax.max)
            {
                minmax.max=arr[i];
            }
            else if(arr[i]<minmax.min)
            {
                minmax.min=arr[i];
            }
        }


    return minmax;
}

//Method 3: Tournament Method



int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Pair ans = Min_Max(arr,n);
    cout<<"Min:"<<ans.min<<endl;
    cout<<"Max:"<<ans.max<<endl;

    return 0;
}

//nlogn complexity