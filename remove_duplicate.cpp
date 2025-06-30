#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> arr={0,0,0,0,1,1,2,2,2,2,3,3,4};
    int n=arr.size();
    int j=1;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            cnt++;
        }
        else{
            cnt =1;
        }
        if(cnt<=2){
            arr[j]=arr[i];
            j++;
        }
    }
    cout<<j;
}