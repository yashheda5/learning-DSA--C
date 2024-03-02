#include <iostream>
using namespace std;

// Define a class for TrieNode
class TrieNode {
public:
     // Data stored in the node (not used in this implementation but can be useful in other scenarios)
    TrieNode* children[26]; // Array of pointers to child nodes (assuming lowercase English alphabets)
    bool isTerminal; // Flag to mark if the node represents the end of a word

    // Constructor to initialize TrieNode
    TrieNode(char d) {
        // Initialize data
        for (int i = 0; i < 26; i++) {
            children[i] = NULL; // Initialize all child pointers to NULL
        }
        this->isTerminal = false; // Initialize isTerminal flag to false
    }
};

// Function to insert a word into the trie
void insertWord(TrieNode* root, string word) {
    // Base case: If the word is empty, mark the current node as terminal and return
    if (word.length() == 0) {
        root->isTerminal = true;
        return;
    }

    char ch = word[0]; // Get the first character of the word
    int index = ch - 'a'; // Convert the character to an index (assuming lowercase English alphabets)
    TrieNode* curr;

    // Check if the current character's node is already present in the trie
    if (root->children[index] != NULL) {
        curr = root->children[index]; // If present, move to the child node
    } else {
        // If not present, create a new node for the current character
        curr = new TrieNode(ch);
        root->children[index] = curr; // Link the new node as a child of the current node
    }

    // Recursively insert the remaining part of the word
    insertWord(curr, word.substr(1));
}

// Function to search for a word in the trie
bool searchWord(TrieNode* root, string word) {
    // Base case: If the word is empty, return whether the current node is terminal or not
    if (word.length() == 0) {
        return root->isTerminal;
    }

    char ch = word[0]; // Get the first character of the word
    int index = ch - 'a'; // Convert the character to an index (assuming lowercase English alphabets)
    TrieNode* child;

    // Check if the current character's node is present in the trie
    if (root->children[index] != NULL) {
        child = root->children[index]; // If present, move to the child node
    } else {
        return false; // If not present, the word doesn't exist in the trie
    }

    // Recursively search for the remaining part of the word
    return searchWord(child, word.substr(1));
}

// Main function
int main() {
    TrieNode* root = new TrieNode('-'); // Create the root node of the trie

    // Insert some words into the trie
    insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "baba");
    insertWord(root, "baby");
    insertWord(root, "babu");
    insertWord(root, "shona");

    cout << "Searching:" << endl;
    
    // Search for a word in the trie
    if (searchWord(root, "coding")) {
        cout << "Present" << endl;
    } else {
        cout << "Absent" << endl;
    }

    return 0;
}
