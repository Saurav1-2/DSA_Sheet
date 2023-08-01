#include <bits/stdc++.h>
using namespace std;


void reverse_arr(int *arr, int n)
{
    int start = 0, end = n-1;
    while(start<=end)
        swap(arr[start++],arr[end--]);
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse_arr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
