#include<bits/stdc++.h>
using namespace std;

int peak_element(int *arr, int n,int l,int h)
{
    int mid = l + (h-l)/2;

    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] <= arr[mid + 1]))
        return mid;
    else if (mid<0 && arr[mid] < arr[mid - 1])
        return peak_element(arr, n, l, mid-1);
    else
        return peak_element(arr, n, mid+1, h);
}

int main() {
   int n;
   cin>>n;
   int *arr = new int[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<< peak_element(arr,n,0,n-1);


   delete[] arr;
   return 0;
}
