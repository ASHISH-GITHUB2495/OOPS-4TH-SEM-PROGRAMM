#include<iostream>
using namespace std;
class B{
protected:    int b;
public: B(int z):b(z){cout<<"cons of B"<<endl;}
void show(){cout<<"Inside B"<<endl;cout<<b<<endl;}
~B(){cout<<"Destructor of B"<<endl;}
};
class C:public virtual B{
//class C:public B{
protected:    int c;
public: C(int z):c(z),B(z*2){cout<<"cons of C"<<endl;}
~C(){cout<<"Destructor of C"<<endl;}};
class D:virtual public B{
//class D:public B{
protected:    int d;
public: D(int z):d(z),B(z*3){cout<<"cons of D"<<endl;}
~D(){cout<<"Destructor of D"<<endl;}};
class E:public C, public D{
protected:    int e;
public: E(int z):e(z),C(z*2), D(z*3),B(z*4){cout<<"cons of E"<<endl;} //B(z*4)
~E(){cout<<"Destructor of E"<<endl;}
};
int main(){
E obj(10);
obj.show();
}

