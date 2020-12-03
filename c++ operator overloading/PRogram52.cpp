#include<iostream>
using namespace std;
class A{
int a;
public:
A(int x):a(x){}
friend A operator ++(A & obj){return A(++obj.a);}
friend A operator ++(A & obj,int){return A(obj.a++);}
void show(){cout<<a<<endl;}
};

int main(){
    A obj(10);
    A obj2=++obj;
    obj2.show();
    obj.show();
    A obj3=obj++;
    obj3.show();
    obj.show();
    return 0;
    }
