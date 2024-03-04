#include <iostream> // Included for cin, cout
#include <cstdlib>  // Included for NULL

using namespace std;

// Node class to represent nodes in the binary tree
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

// Function to build the binary tree recursively
Node *BuildTree()
{
    int data;
    cout << "Enter the data (enter -1 to stop): "; // Prompting user for input
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter data for the left subtree of " << data << " node: ";
    root->left = BuildTree();
    cout << "Enter data for the right subtree of " << data << " node: ";
    root->right = BuildTree();
    return root;
}

// Function to print the left boundary nodes of the binary tree
void printleftNodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left || root->right) // Printing only if it's not a leaf node
    {
        cout << root->data << " ";
        if (root->left)
            printleftNodes(root->left);
        else
            printleftNodes(root->right);
    }
}

// Function to print the leaf nodes of the binary tree
void printleafNodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printleafNodes(root->left);
    printleafNodes(root->right);
}

// Function to print the right boundary nodes of the binary tree
void printRightNodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right)
    {
        printRightNodes(root->right);
        cout << root->data << " ";
    }
    else if (root->left)
    {
        printRightNodes(root->left);
        cout << root->data << " ";
    }
}

// Function to perform boundary traversal of the binary tree
void Boundarytraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printleftNodes(root->left);
    printleafNodes(root);
    printRightNodes(root->right);
}

// Main function
int main()
{
    Node *root = BuildTree(); // Building the binary tree
    cout << "Boundary Traversal of the binary tree: ";
    Boundarytraversal(root); // Performing boundary traversal
    cout << endl;
    return 0;
}
