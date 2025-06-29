#include<bits/stdc++.h>
using namespace std;
int main() {
    int nl;
    int arr[]={2,4,6,8,8,8,11,13};
    nl = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int lb=lower_bound(arr, arr + nl, target) - arr;
    int ub=upper_bound(arr, arr + nl, target) - arr;
    cout<<"lower bound: "<<lb<<endl;
    cout<<"upper bound: "<<ub-1<<endl;

}