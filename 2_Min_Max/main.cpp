#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min=INT_MAX;
    int max=INT_MIN;
};
//Method 1: Sorting the array
//O(nlogn) complexity
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
//O(n) complexity

//Pair Min_Max(int *arr,int n)
//{
//    Pair minmax;
//    if(n==1)
//    {
//        minmax.min=arr[0];
//        minmax.max=arr[0];
//        return minmax;
//    }
//
//        if(arr[0]>arr[1])
//        {
//            minmax.min=arr[1];
//            minmax.max=arr[0];
//        }
//        else
//        {
//            minmax.min=arr[0];
//            minmax.max=arr[1];
//        }
//
//
//        for(int i=2;i<n;i++)
//        {
//            if(arr[i]>minmax.max)
//            {
//                minmax.max=arr[i];
//            }
//            else if(arr[i]<minmax.min)
//            {
//                minmax.min=arr[i];
//            }
//        }
//
//
//    return minmax;
//}

//Method 3: Tournament Method

Pair Min_Max(int *arr, int n,int l,int h)
{
     Pair minmax,mml,mmr;
     int mid;

     if(l==h)
     {
         minmax.min=arr[l];
         minmax.max=arr[l];
         return minmax;
     }
     if(h==l+1)
     {
         if(arr[l]>arr[h])
         {
             minmax.min=arr[h];
             minmax.max=arr[l];
         }
         else
         {
             minmax.min=arr[l];
             minmax.max=arr[h];
         }
     }

     mid = (l+h)/2;
     mml = Min_Max(arr,n,l,mid);
     mmr = Min_Max(arr,n,mid+1,h);

     if(mml.min<mmr.min)
         minmax.min=mml.min;
     else
         minmax.min=mmr.min;

     if(mml.max>mmr.max)
         minmax.max=mml.max;
     else
         minmax.max=mmr.max;

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
    Pair ans = Min_Max(arr,n,0,n-1);
    cout<<"Min:"<<ans.min<<endl;
    cout<<"Max:"<<ans.max<<endl;

    return 0;
}

