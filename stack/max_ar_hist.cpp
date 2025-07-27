#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
vector<int> nsl(int arr[], int n){
    int pseudo_index=-1;
    vector<int>left;
    stack<pair<int,int>>s;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            left.push_back(pseudo_index);
        } else if(s.size()>0 && s.top().first>arr[i]){
            left.push_back(s.top().second);
        } else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                left.push_back(pseudo_index);
            } else {
                left.push_back(s.top().second);
            }
        }s.push({arr[i],i});
    }
    
    
    return left;
}
vector<int> nsr(int arr[], int n){
    int pseudo_index=n;
    vector<int>left;
    stack<pair<int,int>>s;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            left.push_back(pseudo_index);
        } else if(s.size()>0 && s.top().first>arr[i]){
            left.push_back(s.top().second);
        } else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                left.push_back(pseudo_index);
            } else {
                left.push_back(s.top().second);
            }
        }s.push({arr[i],i});
    }
    reverse(left.begin(), left.end());
    return left;
}
int main(){
    
    int arr[]={6, 2, 5, 4, 5, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> l= nsl(arr, n);
    vector<int> r=nsr(arr, n);
    int max_area=0;
    vector<int> width;
    for(int i=0;i<n;i++){
        int w=r[i]-l[i]-1;
        width.push_back(w);
    }
    vector<int> area;
    for(int i=0;i<n;i++){
        area.push_back(arr[i] * width[i]);
    }
    cout << "Maximum area is: " <<*max_element(area.begin(), area.end()) << endl;
    return 0;
}