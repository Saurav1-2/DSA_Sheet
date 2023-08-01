#include<bits/stdc++.h>
using namespace std;

void sort_012(int *arr,int n)
{
    int l=0;
    int h=n-1;
    for(int i=0;i<n && i<=h;)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[l]);
            i++;
            l++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[h]);
            h--;
        }
        else
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
    sort_012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}