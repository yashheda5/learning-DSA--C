#include <bits/stdc++.h>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

pair<bool, int> solve(Node* root) {
    if (root == NULL) {
        pair<bool, int> p = make_pair(true, INT_MIN);
        return p;
    }
    if (root->left == NULL && root->right == NULL) {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    
    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);
    
    if (leftAns.first && rightAns.first && root->data > leftAns.second && root->data > rightAns.second) {
        pair<bool, int> pp = make_pair(true, root->data);
        return pp;
    }
    else {
        pair<bool, int> pp = make_pair(false, root->data);
        return pp;
    }
}

int main() {
    // Your tree construction and testing code here
    return 0;
}
