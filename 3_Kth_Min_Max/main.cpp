#include<bits/stdc++.h>
using namespace std;


struct Pair{
    int min;
    int max;
};
//Method 1: Sorting
Pair Kth_Min_Max(int arr[],int n,int k)
{
    sort(arr,arr+n);
    Pair minmax{};
    minmax.min=arr[k-1];
    minmax.max=arr[n-k];

    return minmax;
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    Pair minmax = Kth_Min_Max(arr,n,k);
    cout<<"Min:"<<minmax.min<<endl;
    cout<<"Max:"<<minmax.max<<endl;

    return 0;
}