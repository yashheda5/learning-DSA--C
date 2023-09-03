#include <iostream>
using namespace std;
#include <vector>
#include <limits.h>
int main(){
    vector<int> a{1,2,3,4,5,6,6,1,2,3};
    vector<int> b{7,8,3,9,4,2,3,1,4};
    vector<int> c;    
    for (int i = 0; i < a.size(); i++)
    {
        int count=0;
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j] && count==0){
                c.push_back(b[j]);
                b[j]=INT_MIN;
                count=1;
            }
            if(a[i]==b[j]){
                b[j]=INT_MIN;
            }

        }
        
    }
    
    
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    
}