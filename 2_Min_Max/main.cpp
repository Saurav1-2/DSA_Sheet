#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair Min_Max(int *arr,int n)
{
    sort(arr,arr+n);
    Pair ans;
    ans.min = arr[0];
    ans.max=arr[n-1];

    return ans;

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
    Pair ans = Min_Max(arr,n);
    cout<<"Min:"<<ans.min<<endl;
    cout<<"Max:"<<ans.max<<endl;

    return 0;
}

//nlogn complexity