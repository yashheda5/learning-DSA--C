#include <bits/stdc++.h>
using namespace std;
int find(int number, int power){
    if(power==1){
        return number;
    }
    return number * find(number,power-1);
}
int main(){
    cout<<find(2,3);
}