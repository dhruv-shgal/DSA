//LOWER BOUND
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[]={5,5,8,15,19};
    n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int l=0;
    int r=n-1;
    int ans=n;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]>=target){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    // cout<<n;
    cout<<"lower bound: "<<ans<<endl;
    int LB=lower_bound(arr,arr+n,target)-arr;
    cout<<"lower bound using STL: "<<LB<<endl;
}