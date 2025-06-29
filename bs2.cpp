#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n, int target){
    int low = 0, high = n-1;
    int first=-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return first;

}
int last_occurence(int arr[],int n, int target){
    int low = 0, high = n-1;
    int last=-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return last;

}
int main() {
    int nl;
    int arr[]={2,4,6,8,8,8,11,13};
    nl = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    // int lb=lower_bound(arr, arr + nl, target) - arr;
    // int ub=upper_bound(arr, arr + nl, target) - arr;
    // cout<<"lower bound: "<<lb<<endl;
    // cout<<"upper bound: "<<ub-1<<endl;
    int f=first_occurence(arr, nl, target);
    int l=last_occurence(arr, nl, target);
    cout<<"First Occurrence: "<<f<<endl;
    cout<<"Last Occurrence: "<<l<<endl;


}