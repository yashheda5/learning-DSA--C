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
bool solve(Node* root,int lb,int ub){
    if(root == NULL){
        return true;
    } 
    if(root->data >lb && root->data <ub){
        bool leftAns = solve(root->left,lb,root->data);
        bool rightAns = solve(root->right,root->data,ub);
        return leftAns && rightAns;
    }else{
        return false;
    }
    
}
bool validate(Node* root){
    long long int lowerBound=-4294967296;
    long long int upperBound=4294967296;
    return solve(root,lowerBound,upperBound);
}

int main() {
    Node* root = NULL;
    cout << "Enter the data for nodes (-1 to terminate input):" << endl;
    takeInput(root);
    cout << "Level Order Traversal:" << endl;
    levelOrder(root);
    return 0;
}
