#include <bits/stdc++.h>
using namespace std;

void subseq(string str, int i, vector<string>& n, string output) {
    if (i == str.length()) {
        n.push_back(output);
        return;
    }

    subseq(str, i + 1, n, output); // Exclude the current character
    output.push_back(str[i]);
    subseq(str, i + 1, n, output); // Include the current character
}

int main() {
    string str = "yash", output = "";
    int i = 0;
    vector<string> n;
    subseq(str, i, n, output);

    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    }

    return 0;
}
