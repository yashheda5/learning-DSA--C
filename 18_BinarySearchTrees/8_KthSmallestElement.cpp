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

Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
    cout << "Enter the data for nodes (-1 to terminate input):" << endl;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
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

int countNodes(Node* root) {
    if (root == NULL) 
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int kthSmallest(Node* root, int k) {
    int count = countNodes(root->left);
    if (k <= count) {
        return kthSmallest(root->left, k);
    } else if (k == count + 1) {
        return root->data;
    } else {
        return kthSmallest(root->right, k - count - 1);
    }
}

int main() {
    Node* root = NULL;
    takeInput(root);
    cout << "Level Order Traversal:" << endl;
    levelOrder(root);

    int k;
    cout << "Enter the value of k for kth smallest element: ";
    cin >> k;
    int kth = kthSmallest(root, k);
    cout << "The " << k << "th smallest element is: " << kth << endl;

    return 0;
}
