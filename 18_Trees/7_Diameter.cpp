#include <bits/stdc++.h>
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
int Diameter(Node* root){
    if (root == NULL){
        return 0;
    }
    int op1 =Diameter(root->left);
    int opt2 =Diameter(root->right);
    int opt3=height(root->left)+ height(root->right);
    int ans=max(op1,max(opt2,opt3));
    return ans;
}
int main() {
  Node *root = NULL;
  root = BuildTree();
  cout<<Diameter(root)<<endl;
  
}