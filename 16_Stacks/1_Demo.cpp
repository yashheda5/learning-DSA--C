#include <bits/stdc++.h>
using namespace std;
int  main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout<<"Element on top of stack "<<st.top()<<endl;
    cout<<"Size of stack is "<<st.size()<<endl;
    cout<<st.empty()<<endl;
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}