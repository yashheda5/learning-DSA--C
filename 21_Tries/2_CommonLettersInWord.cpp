#include <iostream>
using namespace std;

// Define a class for TrieNode
class TrieNode {
public:
    TrieNode* children[26]; // Array of pointers to child nodes (assuming lowercase English alphabets)
    bool isTerminal; // Flag to mark if the node represents the end of a word
    int childcount; // Number of children
    
    // Constructor to initialize TrieNode
    TrieNode() {
        // Initialize data
        for (int i = 0; i < 26; i++) {
            children[i] = NULL; // Initialize all child pointers to NULL
        }
        childcount = 0;
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
        curr = new TrieNode();
        root->childcount++;
        root->children[index] = curr; // Link the new node as a child of the current node
    }

    // Recursively insert the remaining part of the word
    insertWord(curr, word.substr(1));
}

// Function to search for a word in the trie
void findCommonPattern(TrieNode *root, string first, string& ans) {
    for (int i = 0; i < first.length(); i++) {
        char ch = first[i];
        int index = ch - 'a'; // Convert the character to an index (assuming lowercase English alphabets)
        if (root->childcount == 1) {
            ans.push_back(ch);
            root = root->children[index];
        } else {
            return;
        }
        if (root->isTerminal) {
            return;
        }
    }
}

// Main function
int main() {
    TrieNode* root = new TrieNode(); // Create the root node of the trie
    string str[3] = {"flower", "flow", "flight"};
    for (int i = 0; i < 3; i++) {
        insertWord(root, str[i]);
    }
    string ans = "";
    string first = str[0];
    findCommonPattern(root, first, ans);
    
    cout << "Common Prefix: " << ans << endl;

    return 0;
}
