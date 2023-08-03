#include<bits/stdc++.h>
using namespace std;


void shift_neg(int *arr, int n)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        if(arr[l]<0 && arr[r]<0)
        {
            l++;
        }
        else if(arr[l]>=0 && arr[r]<0)
        {
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        else if(arr[l]>0 && arr[r]>0)
        {
            r--;
        }
        else
        {
            r--;
            l++;
        }
    }

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
    shift_neg(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}