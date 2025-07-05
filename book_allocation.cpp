#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[],int n,int k,int mx){
    int students=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>mx){
            students++;
            sum=arr[i];
        }
        if(students>k){
            return false;
        }
}
return true;
}
int main(){
    int n;
    int arr[]={10, 20, 30, 40};
    n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int sum=0;
    int start=max(arr[0],arr[n-1]);
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    int end=sum;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,k,mid)){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    cout << "Minimum pages: " << res << endl;

}

//



// #include <bits/stdc++.h>
// using namespace std;

// int countStudents(vector<int> &arr, int pages) {
//     int n = arr.size(); //size of array.
//     int students = 1;
//     long long pagesStudent = 0;
//     for (int i = 0; i < n; i++) {
//         if (pagesStudent + arr[i] <= pages) {
//             //add pages to current student
//             pagesStudent += arr[i];
//         }
//         else {
//             //add pages to next student
//             students++;
//             pagesStudent = arr[i];
//         }
//     }
//     return students;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     //book allocation impossible:
//     if (m > n) return -1;

//     int low = *max_element(arr.begin(), arr.end());
//     int high = accumulate(arr.begin(), arr.end(), 0);
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int students = countStudents(arr, mid);
//         if (students > m) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     vector<int> arr = {25, 46, 28, 49, 24};
//     int n = 5;
//     int m = 3;
//     int ans = findPages(arr, n, m);
//     cout << "The answer is: " << ans << "\n";
//     return 0;
// }

