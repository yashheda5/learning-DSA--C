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

// build tree from preOrder and InOrder traversal
Node* build(int inOrder[], int preOrder[], int size, int& index, int inOrderStart, int inOrderEnd) {
    if (index >= size || inOrderStart > inOrderEnd) {
        return NULL;
    }
    int element = preOrder[index];
    Node* root = new Node(element);
    int position = findPosition(inOrder, size, element);
    index++;
    root->left = build(inOrder, preOrder, size, index, inOrderStart, position - 1);
    root->right = build(inOrder, preOrder, size, index, position + 1, inOrderEnd);
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
    int inOrder[] = { 40,20,50,10,60,30,70 };
    int preOrder[] = { 10,20,40,50,30,60,70 };
    int size = 7;
    int index = 0;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    Node* tree = build(inOrder, preOrder, size, index, inOrderStart, inOrderEnd);
    levelOrder(tree);
    return 0;
}
