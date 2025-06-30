#include<bits/stdc++.h>
using namespace std;
int func(int k,int mid, int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=mid;
        if(ans>k) return 2;
    }
    if(ans==k) return 1;
    return 0;
}
int main(){
    int k, n;
    cin >> k >> n;
    int low = 1, high = k, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (func(k, mid, n)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}