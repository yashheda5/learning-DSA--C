#include <bits/stdc++.h>
using namespace std;
bool find(string& str, char& ch, int i)
{
    if (i == str.length())
    {
        return false;
    }
    if(ch == str[i]){
        return true;
    }
    return find(str, ch, ++i);
}
int main()
{
    string str = "yash hedaz";
    char ch = 'f';
    cout << find(str, ch, 0);
}