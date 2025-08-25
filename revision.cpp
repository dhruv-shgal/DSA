#include<bits/stdc++.h>
int main(){
    int arr[5]={2,5,1,3,0};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    std::cout<<"the largest number is "<<largest;
}