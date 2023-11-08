#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the word "<<endl;
    string str;
    getline(cin,str);
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        if((ans.length()-1 >=0)&& str[i] == ans[ans.length()-1]){
            ans.pop_back();
        }else{
            ans.push_back(str[i]);
        }
    }
    cout<<"The ans is = "<<ans<<endl;
    
}