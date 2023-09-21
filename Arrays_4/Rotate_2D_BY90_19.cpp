#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>arr){
    vector<vector<int> >brr(arr.size(),vector<int>(arr[0].size()));

//method 1 brute force operation
//placing it in a new array thus increasing the complexity
    
    //     for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         brr[j][arr[i].size()-1-i]=arr[i][j];
    //     }
        
        
    // }


    //printing the result
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     for (int j = 0; j < brr[i].size(); j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    




//method 2 optimzed approach
//transpose than reverse approach

for (int i = 0; i < arr.size(); i++)
{
    for (int j = 0; j < i+1; j++)
    {
       swap(arr[i][j],arr[j][i]);
    }
     
    
}

for (int i = 0; i < arr.size(); i++)
{
  reverse(arr[i].begin(),arr[i].end());
  
}



for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }



    
    
}
int main(){
    vector<vector<int>>arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotate(arr);
}