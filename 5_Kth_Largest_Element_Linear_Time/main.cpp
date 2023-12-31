#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int l,int r)
{
    int x = arr[r-1];
    int i=l;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<=arr[x])
        {
            swap(arr[i],arr[j]);
            i++;
        }

    }
    swap(arr[x],arr[i]);
    return i;
}

int randomPartition(int *arr, int l,int r)
{
    int n = r-l+1;
    int pivot = (rand()%100+1)%n;
    return partition(arr,l,r);
}

int kthLargest(int *arr, int l, int r, int k)
{
    if(k>0 && k<=r-l+1)
    {
        int n = r-l+1;
        int pos = randomPartition(arr,l,r);
        if(pos-l == n-k)
        {
            return arr[pos];
        }
        if(pos-1>n-k)
        {
            return kthLargest(arr,l,pos-1,k);
        }
        return kthLargest(arr,pos+1,r,k-pos+l-1);
    }
    return INT_MAX;
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
    int kthlargest= kthLargest(arr,0,n-1,k);
    cout<<kthlargest<<endl;
    return 0;

}
