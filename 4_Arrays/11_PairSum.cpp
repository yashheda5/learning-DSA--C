#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>a{1,3,5,7,2,4,6};
    for (int i = 0; i < a.size(); i++)
    {
        
        for (int j = i+1; j < a.size(); j++)
        {
            int sum=0;
            sum=a[i]+a[j];
            if(sum == 9){
                cout<<a[i]<<" "<<a[j]<<endl;
                
            }
        }
        
    }
    

}