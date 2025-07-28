#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// stack <int>s;
// stack<int>ss;
// void push(int a){
//     s.push(a);
//     if(ss.empty()||a<=ss.top()){
//         ss.push(a);
//     }
//     return;
// }
// int pop(int a){
//     if(s.empty()){
//         return -1; // or throw an exception
//     }
//     int ans=s.top();
//     if(ss.top()==ans){
//         ss.pop();
//     }
//     return ans;
// }
// int get_min(){
//     if(ss.empty()){
//         return -1; // or throw an exception
//     }
//     return ss.top();
// }
// int main(){
//     push(5);
//     push(2);
//     push(8);
//     push(1);
//     cout << "Minimum element: " << get_min() << endl; // Output: 1
//     cout << "Popped element: " << pop(1) << endl; // Output: 1
//     cout << "Minimum element after pop: " << get_min() << endl; // Output: 2
//     cout << "Popped element: " << pop(2) << endl; // Output: 2
//     cout << "Minimum element after pop: " << get_min() << endl; // Output: 5
//     return 0;   
// }

// in O(1) time complexity
// This code implements a stack that supports push, pop, and get_min operations in O(1) time complexity.
stack<int> s;
void push(int x,int &min_ele){
    if(s.empty()){
        s.push(x);
        min_ele = x;
    }
    if(x>=min_ele){
        s.push(x);
    } else {
        s.push(2*x - min_ele);
        min_ele = x;
    }

}
void pop(int x,int &min_ele){
    if(s.empty()){
        return; // or throw an exception
    }
    else{
        if(s.top()>min_ele){
            s.pop();
        } else {
            min_ele = 2 * min_ele - s.top();
            s.pop();
        }
    }
}
int top(int &min_ele){
    if(s.empty()){
        return -1; // or throw an exception
    }
    if(s.top()>=min_ele){
        return s.top();
    } else {
        return min_ele;
    }
}
int get_min(int &min_ele){
    if(s.empty()){
        return -1; // or throw an exception
    }
    return min_ele;
}
int main() {
    int min_ele = 0; // Initialize the minimum element
    push(5, min_ele);
    push(2, min_ele);
    push(8, min_ele);
    push(1, min_ele);
    
    cout << "Minimum element: " << get_min(min_ele) << endl; // Output: 1
    cout << "Top element: " << top(min_ele) << endl; // Output: 1
    pop(1, min_ele);
    cout << "Popped element: " << top(min_ele) << endl; // Output: 2
    cout << "Minimum element after pop: " << get_min(min_ele) << endl; // Output: 2
    pop(2, min_ele);
    cout << "Popped element: " << top(min_ele) << endl; // Output: 5
    cout << "Minimum element after pop: " << get_min(min_ele) << endl; // Output: 5
    
    return 0;
}