#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
}; // Added semicolon
bool findNodeInBST(Node* root , int target){
    if(root == NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    if(target < root->data){
        findNodeInBST(root->left, target);
    }else{
        findNodeInBST(root->right, target);
    }
}
Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) { // Corrected parameter type
    int data; // Declared data variable
    cin >> data;

    while (data != -1) { // Added loop condition
        root = insertIntoBST(root, data); // Passed data to insertIntoBST
        cin >> data;
    }
}

void levelOrder(Node* root) {
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
}

int main() {
    Node* root = NULL;
    cout << "Enter the data for nodes (-1 to terminate input):" << endl;
    takeInput(root);
    cout << "Level Order Traversal:" << endl;
    levelOrder(root);
    cout<<"find element in ur tree"<<endl;
    int target;
    cin>>target;
    cout<<findNodeInBST(root, target)<<endl;
    return 0;
}



