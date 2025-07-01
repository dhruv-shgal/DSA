#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool possible(vector<int>& bloomDay,int days, int m, int k){
        int nb=0;
        int cnt=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=days){
                cnt++;
            }
            else{
                nb+=cnt/k;
                cnt=0;
            }
            
        }
        nb+=cnt/k;
        if(nb>=m) return true;
        else {return false;}
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        long long val = m*1ll*k*1ll;
        if (val>bloomDay.size()) return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m, k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low; 
    }
int main() {
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3; // Number of bouquets
    int k = 1; // Number of flowers in each bouquet
    int result = minDays(bloomDay, m, k);
    cout << "Minimum days to make " << m << " bouquets: " << result << endl;
    return 0;
}
