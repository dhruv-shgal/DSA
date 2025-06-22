//BRUTE FORCE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1, 3, 5, 7};
    int arr2[]={2, 4, 6, 8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    int l=n1-1;
    int r=0;
    int index=0;
//     while(l<=n1 && r<=n2){
//         if(arr1[l]<=arr2[r]){
//             arr3[index]=arr1[l];
//             l++; index++;
//         }
//         else{
//             arr3[index]=arr2[r];
//             r++; index++;
//         }
//     }
//     while(l<n1){
//         arr3[index]=arr1[l];
//         l++; index++;
//     }
//     while(r<n2){
//         arr3[index]=arr2[r];
//         r++; index++;
//     }
//     for(int i=0; i<n1+n2; i++){
//         if(i<n1) arr1[i]=arr3[i];
//         else arr2[i-n1]=arr3[i];
// }
// cout << "Merged array: "<<endl;
//     for(int i=0; i<n1+n2; i++){
//         cout << arr3[i] << " ";
//     }


// OPTIMAL APPROACH

    while(l>=0 && r<n2){
        if(arr1[l] > arr2[r]){
            swap(arr1[l], arr2[r]);
            l--;r++;
        }
        else{
            break;
        }
        
    }
    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
    cout << "Merged array: "<<endl;
    for(int i=0; i<n1; i++){
        cout << arr1[i] << " ";
    }        
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
}