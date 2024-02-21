#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
Node *BuildTree() {
  int data;
  cout << "Enter the data" << endl;
  cin >> data;
  if (data == -1) {
    return NULL;
  }
  Node *root = new Node(data);
  cout << "Enter data for left part of tree " << data << " node " << endl;
  root->left = BuildTree();
  cout << "Enter data for right part of tree " << data << " node " << endl;
  root->right = BuildTree();
  return root;
}
int height(Node* root){
    if (root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);    
    int rightHeight = height(root->right);
    int ans=max(leftHeight,rightHeight) +1 ;
    return ans;
}
bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }
    int leftHeight =height(root->left);
    int rightHeight =height(root->right);
    int diff= abs(leftHeight - rightHeight);
    bool ans =(diff <=1);
    bool leftAns=isBalanced(root->left);
    bool rightAns=isBalanced(root->right);
    if(ans1 && leftAns && rightAns){
        return true;
    }else {
        return false;
    }
}
int main() {
  Node *root = NULL;
  root = BuildTree();
}