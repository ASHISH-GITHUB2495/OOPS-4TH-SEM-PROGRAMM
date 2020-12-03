#include<iostream>
#include<cstdlib>
using namespace std;

class B{
private:
int a,b,c;
public:
B(int x, int y):a(x),b(y),c(2*b){}
void show(){cout<<a<<" "<<b<<" "<<c<<endl;}
};
int main(){
int i;
cin>>i;
switch(i){
case 1:
{
B obj(10,20); obj.show();break;
}
case 2:
{
B obj2(20,30); obj2.show();break;
}
default: exit(0);
}
return 0;
}
