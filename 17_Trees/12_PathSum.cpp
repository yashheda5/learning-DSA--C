#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *BuildTree()
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter data for left part of tree " << data << " node " << endl;
    root->left = BuildTree();
    cout << "Enter data for right part of tree " << data << " node " << endl;
    root->right = BuildTree();
    return root;
}
voidd solve(Node* root, int targetSum, int& CurrSum, vector<int>& path, vector<vector<int>> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        path.push_back(root->data);
        CurrSum += root->data;
        if (CurrSum == targetSum)
        {
            ans.push_back(path);
        }
        
        path.pop_back();
        CurrSum -= root->data;
        return;
        
    }
    path.push_back(root->data);
    CurrSum += root->data;
    solve(root->left, targetSum, CurrSum, path, ans);
    solve(root->right, targetSum, CurrSum, path, ans);
    path.pop_back();
    CurrSum -= root->data;
}
vector<vector<int>> pathSum(Node *root, int targetSum)
{
    vector<vector<int>> ans;
    int sum = 0;
    vector<int> temp;
    solve(root, targetSum, sum, temp, ans);
    return ans;
}

int main()
{
    Node *root = NULL;
    root = BuildTree();
}