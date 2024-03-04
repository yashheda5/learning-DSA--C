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

int minValue(Node* root) {
    Node* temp = root;
    if (temp == NULL) {
        return -1;
    }
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp->data;
}

int maxValue(Node* root) {
    Node* temp = root;
    if (temp == NULL) {
        return -1;
    }
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp->data;
}

Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    }
    else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node*& root) {
    int data;
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

Node* findNode(Node* root, int p) {
    if (root == NULL) {
        return NULL;
    }
    if (p == root->data) {
        return root;
    }
    if (p > root->data) {
        return findNode(root->right, p);
    }
    else {
        return findNode(root->left, p);
    }
}

Node* deleteNode(Node* root, int target) {
    if (root == NULL) {
        return root;
    }
    if (root->data == target) {
        if (root->right == NULL && root->left == NULL) {
            delete root;
            return NULL;
        }
        else if (root->right != NULL && root->left == NULL) {
            Node* child = root->right;
            delete root;
            return child;
        }
        else if (root->right == NULL && root->left != NULL) {
            Node* child = root->left;
            delete root;
            return child;
        }
        else {
            int inorderPre = maxValue(root->left);
            root->data = inorderPre;
            root->left = deleteNode(root->left, inorderPre);
            return root;
        }
    }
    else if (target > root->data) {
        root->right = deleteNode(root->right, target);
    }
    else {
        root->left = deleteNode(root->left, target);
    }
    return root;
}

int main() {
    Node* root = NULL;
    cout << "Enter the data for nodes (-1 to terminate input):" << endl;
    takeInput(root);
    cout << "Level Order Traversal:" << endl;
    levelOrder(root);
    cout << "Enter the element you want to delete: ";
    int target;
    cin >> target;
    root = deleteNode(root, target);
    cout << "After deletion, Level Order Traversal:" << endl;
    levelOrder(root);
    return 0;
}
