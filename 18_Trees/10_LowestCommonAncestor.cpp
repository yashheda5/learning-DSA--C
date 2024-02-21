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
Node* LowestCommonAncestor(Node* root,Node* p,Node* q){
    if(root == NULL) {
        return NULL;
    }
    if(root->data == p->data){
        return p;
    }
    if(root->data == q->data){
        return q;
    }
    Node* left =LowestCommonAncestor(root->left,p,q);
    Node* right = LowestCommonAncestor(root->right,p,q);

    if(left != NULL && right != NULL){
        return NULL;
    } else if(left != NULL && right == NULL){
        return left;
    }else if(left == NULL && right != NULL){
        return right;
    } else{
        return root;
    }
    
}

int main() {
  Node *root = NULL;
  root = BuildTree();
}