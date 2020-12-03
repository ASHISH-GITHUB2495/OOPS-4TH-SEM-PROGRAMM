#include<iostream>
using namespace std;

class B{
protected:    int c;
public: B(int z):c(z){}
void show(){cout<<c<<endl;}
};

class C:public B{
int d,e;
public: C(int p):d(p),e(d*2),B(p){}
//if d(e),e(p*2),B(p)/d(p),e(p),B(d)
void show(){B::show();
cout<<d<<" " <<e<<endl;}
};
int main(){
C obj2(10);
obj2.show();
}

