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
void printTopView(Node *root){
    if(root == NULL){
        return;
    }
    map<int,int> topNode;

    queue<pair<Node *,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node *,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;

        if(topNode.find(hd) == topNode.end()){
            topNode[hd]=frontNode->data;
        }
        if(frontNode -> left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode -> right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

}
int main() {
  Node *root = NULL;
  root = BuildTree();
}