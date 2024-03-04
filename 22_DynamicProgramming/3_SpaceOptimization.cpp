#include <bits/stdc++.h>
using namespace std;
int SpaceOptimization(int n){
    

int prev1=1;
int prev2=0;
int curr;
for (int i = 2; i <=n; i++)
{
    curr=prev1+prev2;
    prev2=prev1;
   prev1=curr;
   
}
return curr;


}
int main(){
    cout<<SpaceOptimization(10);
}