#include <bits/stdc++.h>
using namespace std;

void printPermutation(string &str, int i) {
    if (i >= str.length()) {
        cout << str << " ";
        return;
    }

    for (int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);  // Swap characters at positions i and j
        printPermutation(str, i + 1);  // Recursively generate permutations for the remaining characters
        swap(str[i], str[j]);  // Backtrack by swapping the characters back to their original positions
    }
}

int main() {
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}
