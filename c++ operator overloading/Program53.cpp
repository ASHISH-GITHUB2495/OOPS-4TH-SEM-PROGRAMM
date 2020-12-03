#include<iostream>
using namespace std;
class A{
int a;
public:
    A(int x):a(x){}
    A operator +(A  obj){
    return A(a+obj.a);}
    //friend A operator +(A obj1, A obj2){
    //return A(obj1.a+obj2.a);
    //}
    void show(){cout<<a<<endl;}
};
int main(){
A obj1(10), obj2(20);
A obj3=obj1+obj2;//operator +(obj1,obj2)
obj3.show();      //obj1.operator+(obj2)
}
