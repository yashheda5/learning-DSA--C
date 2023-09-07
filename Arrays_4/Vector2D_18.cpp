#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector <int> >arr;
    vector<int>a{1,2,3,4,5};
    vector<int>b{6,7,8,9,10};
    vector<int>c{11,12,13,14,15};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    vector<vector<int>>brr(3,vector<int>(3,-5));
    cout<<endl;
     for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}