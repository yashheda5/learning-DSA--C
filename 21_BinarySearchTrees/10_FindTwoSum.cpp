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
};
void storeInorder(Node* root, vector<int>& InOrder){
    if(root == NULL){
        return;
    }
    storeInorder(root->left,InOrder);
    InOrder.push_back(root->data);
    storeInorder(root->right,InOrder);
}
bool findTarget(Node* root,int k){
    vector<int> inOrder;
    storeInorder(root,inOrder);
    int s=0,e=inOrder.size()-1;
    while (s<=e)
    {
        int sum=inOrder[s]+inOrder[e];
        if(summ=k){
            return true;
        }
        if(sum > k){
            e--;
        }else{
            s++;
        }
   
    }
    return false;
    

}
int main(){

}