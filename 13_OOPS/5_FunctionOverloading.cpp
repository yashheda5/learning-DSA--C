#include <iostream>
using namespace std;
class Param{
public:
int val;
void operator+(Param& obj2){
    int v1=this->val;
    int v2=obj2.val;
    cout<<(v2-v1)<<endl;
}
};
int main(){
Param obj1, obj2;
obj1.val=7;
obj2.val=2;
obj1+obj2;
}