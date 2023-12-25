#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int s , int e){
int mid =s+(e-s)/2;

}
void MergeSort(vector<int>& arr, int s , int e){
    if(s>=e){
        return; //
    }
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
   vector<int>arr{4,56,7,21,55,41,10,2};
   MergeSort(arr,0,arr.size()-1);
}
