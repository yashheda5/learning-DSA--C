#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str)
{

    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "abc";
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            cout<< palindrome(str.erase(i, 1)) || palindrome(str.erase(str.length() - 1 - i, 1));
        }
    }
}