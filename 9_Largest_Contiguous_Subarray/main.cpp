#include<bits/stdc++.h>
using namespace std;

int maximumSubarraySum(int* arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    int i=0;
    for(;i<=n-1;i++) {
        currSum += arr[i];

        if (currSum > maxSum) {
            maxSum = currSum;
        }
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
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
    cout<<maximumSubarraySum(arr,n);
    return 0;
}