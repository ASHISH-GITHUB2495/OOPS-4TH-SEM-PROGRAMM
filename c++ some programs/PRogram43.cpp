#include<iostream>
using namespace std;
class A{
public:
string name;
A(string n):name(n){cout<<"CONS "<<name<<endl;}
~A();
};
A::~A(){cout<<"DEST "<<name<<endl;}
void func(){
static A obj("obj");
cout<<"func exits"<<endl;
}
static A obj3("obj3");
int main(){
func();func();
{static A obj2("obj2");}
cout<<"main exits"<<endl;
return 0;}
