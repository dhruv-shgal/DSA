#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[],int n,int k,int mx){
    int students=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>mx){
            students++;
            sum=arr[i];
        }
        if(students>k){
            return false;
        }
}
return true;
}
int main(){
    int n;
    int arr[]={10, 20, 30, 40};
    n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int sum=0;
    int start=max(arr[0],arr[n-1]);
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    int end=sum;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,k,mid)){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    cout << "Minimum pages: " << res << endl;

}