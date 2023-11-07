#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter words"<<endl;
    getline(cin,str);
    cout<<str.length()<<endl;
    cout<<str.empty()<<endl;
    str.push_back('@');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(0,3)<<endl;
    cout<<str.substr(4,3)<<endl;
    string str1="yash";
    string str2="yash";
    if(str1.compare(str2)==0){
        cout<<"a and b are equal"<<endl;
    } else {
        cout<<"a and b are not equal"<<endl;
    }
    
    if(str1.find("yash")==std::string ::npos){
        cout<<"not found"<<endl;
    } else{
    cout<<"found"<<endl;
    }
    str.replace(0,4,"heda");
    cout<<str<<endl;
    str.erase(4,8);
    cout<<str<<endl;
}