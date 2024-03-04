#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int>p=make_pair("scorpio",9);
    pair<string,int>q("alto",2);
    m.insert(q);
    m.insert(p);
    cout<<m.at("alto")<<endl;
    cout<<m["alto"]<<endl;
    cout<<m.count("alto")<<endl;
    m["innova"]=4;
    if(m.find("scorpio") != m.end()){
        cout<<"fortuner found"<<endl;
    }else{
        cout<<"fortuner not found"<<endl;
    }
    cout<<m.size()<<endl;
    for(auto i : m){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
}