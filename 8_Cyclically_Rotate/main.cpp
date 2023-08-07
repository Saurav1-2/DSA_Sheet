#include<bits/stdc++.h>
using namespace std;

void rotate_clock(int *arr, int n, int k)
{
    int i=0;
    while(i<k)
    {
        int l = arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=l;
        i++;
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
    int k;
    cin>>k;
    rotate_clock(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}