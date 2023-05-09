#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
int main(){
    vector <int> arr {1,2,2,2,3,4,5,6,7,8};
    vector <int> brr{2,551,17,4};
    vector <int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if(brr[j]==arr[i]){
                brr[j]=INT_MIN;
                ans.push_back(arr[i]);
            }
        }
        
    }
    for (int k = 0; k < ans.size(); k++)
    {
        cout<<ans[k]<<" ";
    }
    

}