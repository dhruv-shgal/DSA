#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node *root){
    if(root==nullptr) return 0;
    Node * left=root->left;
    Node* right=root->right;
    return 1+max(height(left),height(right));
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height of the binary tree: " << height(root) << endl;

    // Clean up memory (not shown for brevity)
    return 0;
}