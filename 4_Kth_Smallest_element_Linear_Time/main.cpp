#include<bits/stdc++.h>
using namespace std;

//partition
int partition(int *arr,int l,int r)
{
    int x = arr[r],i=l;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

int randomPartition(int *arr, int l,int r)
{
    int n = r-l+1;
    int pivot = (rand()%100+1)%n;
    swap(arr[l+pivot],arr[r]);
    return partition(arr,l,r);
}

int kthSmallest(int *arr, int l, int r,int k)
{
    if(k>0 && k<=r-l+1)
    {
        int pos = randomPartition(arr,l,r);
        if(pos-l == k-1)
        {
            return arr[pos];
        }
        if(pos-1>k-1)
        {
            return kthSmallest(arr,l,pos-1,k);
        }

        return kthSmallest(arr,pos+1,r,k-pos+1-1);
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
    int kthsmall = kthSmallest(arr,0,n-1,k);
    cout<<kthsmall<<endl;
    return 0;


}