 #include<bits/stdc++.h>
 using namespace std;
 #include<vector>
 int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }return low+k;
    }
    int main() {
        vector<int> arr = {2, 3, 4, 7, 11}; // Example input
        int k = 5; // Example k value
        int result = findKthPositive(arr, k);
        cout << "The " << k << "th positive integer missing from the array is: " << result << endl;
        return 0;
    }