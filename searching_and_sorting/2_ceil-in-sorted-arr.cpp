#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,9};
    int n = 8;
    int low=0, high=n-1;
    int target = 7;
    int ans=-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=target)
        {
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(ans==-1)
    cout<<"ceil doesnt exist"<<endl;
    cout<<"ceil is "<<ans;
    return 0;
}