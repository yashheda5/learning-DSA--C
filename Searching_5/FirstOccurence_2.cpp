#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>arr,int k){
    int s =0,e=arr.size()-1,c=-1;
    while (s<=e)
    {
        int mid =s+(e-s)/2;
        if(arr[mid]==k){
            c=mid;
            e=mid-1; 
        } else if(k>arr[mid]){
            s=mid+1;
        } else{
            e=mid-1;
        }
    }
    return c;
    
}
int main(){
vector<int>arr{1,2,3,4,4,4,4,5,6};
     int k=4;
     cout<<binarySearch(arr,k);
}