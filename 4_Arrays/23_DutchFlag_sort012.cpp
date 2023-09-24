#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>arr{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
int low=0,high=arr.size()-1,mid=0;
while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    } else if(arr[mid] ==2){
        swap(arr[mid],arr[high]);
        
        high--;
    }else{
        mid++;
    }
}
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

}

