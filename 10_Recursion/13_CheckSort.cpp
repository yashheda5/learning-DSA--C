#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> arr, int i)
{
    if (i == arr.size())
        return true;
    
    if(i<arr.size()-2 && arr[i]>arr[i+1]){
        return false;
    }
    return check(arr, i+1);
}
int main()
{
    vector<int> arr{1, 12, 3, 4, 5};
    if(check(arr, 0)) {
        cout<<"sorted"<<endl;
    } else{
        cout<<"not sorted "<<endl;
    }
}