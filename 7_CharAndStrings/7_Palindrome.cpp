#include <bits/stdc++.h>
using namespace std;
bool palindrome(char word[]){
    
    for (int  i = 0; i < strlen(word)/2; i++)
    {
        if(word[i] != word[strlen(word)-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    char word[100];
    cout<<"Enter word"<<endl;
    cin.getline(word,100);
    cout<<"The word is "<<palindrome(word)<<endl;
}