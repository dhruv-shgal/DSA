 #include<bits/stdc++.h>
 #include<vector>
 using namespace std;
 int day(vector<int>& weights,int cap){
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>cap){
                days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int nodays=day(weights,mid);
            if(nodays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
    int main() {
        vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int days = 5; // Example number of days
        int result = shipWithinDays(weights, days);
        cout << "Minimum capacity to ship within " << days << " days: " << result << endl;
        return 0;
    }