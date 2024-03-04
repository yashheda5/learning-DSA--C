#include <bits/stc++.h>
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
Node* BuildTree() {
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
void printRightView(Node *root,vector <int>& ans,int level){
   if(root == NULL){
    return;
   }
   if(level == ans.size()){
    ans.push_back(root->data);
   }
   printRightView(root->right ,ans,level+1);
   printRightView(root->left ,ans,level+1);
   

}
int main() {
  Node *root = NULL;
  root = BuildTree();
}