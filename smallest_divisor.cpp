#include<bits/stdc++.h>
using namespace std;
#include<vector>
int sumof(vector<int>& nums, int div){
    int d=0;
    for(int i=0;i<nums.size();i++){
        d+=ceil((double)nums[i]/(double)div);
    }
    return d;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumof(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
    int main() {
        vector<int> nums = {1, 2, 5, 9};
        int threshold = 6; // Example threshold
        int result = smallestDivisor(nums, threshold);
        cout << "Smallest divisor: " << result << endl;
        return 0;
    }