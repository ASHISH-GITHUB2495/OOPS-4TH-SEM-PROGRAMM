#include<iostream>
using namespace std;
class A{
int a,b;
public:
A clone();
A(int x, int y):a(x),b(y){cout<<"CONS "<<a<<b<<endl;}
void show(){cout<<"Inside show "<<a<<b<<endl;}
~A(){cout<<"DEST "<<a<<b<<endl;}
};
A A::clone(){
if(a>0 && b>0)
    return A(a,b);
else
    return A(0,0);
}
int main(){
A obj(10,22);
A obj2=obj.clone();
obj2.show();
A(11,11);
return 0;
}
