#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>a{0,1,0,1,1,1,0,1,1,0,0,1,1};
    int s=0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i+1; j < a.size(); j++)
        {
            if(a[j]< a[i]){
                swap(a[j],a[i]);
                break;
            }
        }
        
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
