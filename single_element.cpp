#include<bits/stdc++.h>
using namespace std;
int single_element(int arr[],int n){
    if (n==1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid= low + (high - low) / 2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2==0 && arr[mid]==arr[mid+1] || mid%2==1 && arr[mid]==arr[mid-1]){
            low=mid+1; // move to the right side
        }
        else{
            high=mid-1; // move to the left side
        }
        
    }
    return -1;
}
int main(){
    int n;
    int arr[]={1,1,2,2,3,3,4,5,5};
    n=sizeof(arr)/sizeof(arr[0]);
    int result = single_element(arr, n);
    cout << "The single element is: " << result << endl;

}