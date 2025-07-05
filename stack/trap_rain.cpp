#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,0,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lmx[n];
    int rmx[n];
    lmx[0]= arr[0];
    
   for(int i=0;i<n;i++){
    lmx[i]=max(lmx[i-1],arr[i]);
   }
   rmx[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
     rmx[i]=max(rmx[i+1],arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(lmx[i],rmx[i])-arr[i];
    }
    cout<<sum<<endl;
}