#include<bits/stdc++.h>
int my_sqrt(int n){
    int low=1;
    int high=n;
    int ans=1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }return ans;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<"the square root of "<<n<<" is "<<my_sqrt(n)<<std::endl;
}