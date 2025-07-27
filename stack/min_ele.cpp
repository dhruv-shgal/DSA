#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack <int>s;
stack<int>ss;
void push(int a){
    s.push(a);
    if(ss.empty()||a<=ss.top()){
        ss.push(a);
    }
    return;
}
int pop(int a){
    if(s.empty()){
        return -1; // or throw an exception
    }
    int ans=s.top();
    if(ss.top()==ans){
        ss.pop();
    }
    return ans;
}
int get_min(){
    if(ss.empty()){
        return -1; // or throw an exception
    }
    return ss.top();
}
int main(){
    push(5);
    push(2);
    push(8);
    push(1);
    cout << "Minimum element: " << get_min() << endl; // Output: 1
    cout << "Popped element: " << pop(1) << endl; // Output: 1
    cout << "Minimum element after pop: " << get_min() << endl; // Output: 2
    cout << "Popped element: " << pop(2) << endl; // Output: 2
    cout << "Minimum element after pop: " << get_min() << endl; // Output: 5
    return 0;   
}