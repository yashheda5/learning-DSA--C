#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(56);
    arr.push_back(6);
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    arr.pop_back();
    cout<<endl;
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>brr(10);
     cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;
     for (int  i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    vector<int>crr(10,-101);
    for (int  i = 0; i < crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    vector<int> drr{10,20,30,40,50};
    for (int  i = 0; i < drr.size(); i++)
    {
        cout<<drr[i]<<" ";
    }
    cout<<endl;
    cout<<crr.empty()<<endl;
    vector<int>drr;
    cout<<drr.empty()<<endl;
    return 0;
}
