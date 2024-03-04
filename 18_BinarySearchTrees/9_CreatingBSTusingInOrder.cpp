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

Node* bstUsingInOrder(int arr[], int s, int e) {
    if (s > e) {
        return NULL;
    }
    int mid = s + (e - s) / 2;
    int element = arr[mid];
    Node* root = new Node(element);
    root->left = bstUsingInOrder(arr, s, mid - 1);
    root->right = bstUsingInOrder(arr, mid + 1, e);
    return root;
}

void levelOrder(Node* root) {
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int s = 0;
    int e = 7; // Index of the last element in the array
    Node* root = bstUsingInOrder(arr, s, e);
    cout << "Level Order Traversal:" << endl;
    levelOrder(root);
    return 0;
}
