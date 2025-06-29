#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={4,3,1,2,3,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            arr[k]=arr[i];
            k++;
        }
    }
    cout<<target<<endl;
}