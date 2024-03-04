#include <iostream>
#include <queue>
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

int findPosition(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// build tree from preOrder and PostOrder traversal
Node* build(int inOrder[], int postOrder[], int size, int& index, int inOrderStart, int inOrderEnd) {
    if (index < 0 || inOrderStart > inOrderEnd) {
        return NULL;
    }
    int element = postOrder[index];
    Node* root = new Node(element);
    int position = findPosition(inOrder, size, element);
    index--;
    root->right = build(inOrder, postOrder, size, index, position + 1, inOrderEnd);
    root->left = build(inOrder, postOrder, size, index, inOrderStart, position -1);
    return root;
}

void levelOrder(Node* root) {
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
}

int main() {
    int inOrder[] = { 40,20,10,50,30,60 };
    int postOrder[] = { 40,20,50,60,30,10 };
    int size = 6;
    int index = size-1;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    Node* tree = build(inOrder, postOrder, size, index, inOrderStart, inOrderEnd);
    levelOrder(tree);
    return 0;
}
