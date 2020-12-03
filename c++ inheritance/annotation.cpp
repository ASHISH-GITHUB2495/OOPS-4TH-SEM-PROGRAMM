#include<iostream>
using namespace std;
class A{
public:
virtual void show(){cout<<"Inside A"<<endl;}
};
class B:public A{
public:
void show() override{cout<<"Inside B"<<endl;}// Gives no error, Prints Inside B
//void show(int a)override {cout<<"Inside B"<<endl;}  //Gives error, marked override, but does not override
//void sho() override{cout<<"Inside B"<<endl;} //Gives error, marked override, but does not override
};
int main(){
B obj;
obj.show();// It is not using polymorphic behaviour
A * ptr=new B; //It is using polymorphic behaviour
ptr->show();
//Both are example of overriding.
}
