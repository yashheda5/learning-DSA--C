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
Node* KthAncestor(Node* root,Node* p,int& k){
    if(root == NULL) {
        return NULL;
    }
    if(root->data == p->data){
        return root;
       
    }
     Node* left =KthAncestor(root->left,k,p);
        Node* right =KthAncestor(root->right,k,p);
        if(left != NULL && right != NULL){
            k--;
        }
        if(k==0){
            k=-1;
            return root;

        }
        return NULL;
}

int main() {
  Node *root = NULL;
  root = BuildTree();
}