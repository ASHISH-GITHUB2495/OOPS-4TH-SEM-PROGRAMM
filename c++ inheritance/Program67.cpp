#include<iostream>
using namespace std;
class B{
protected:
    int c;
public:
    B(int z):c(z){}
    void show(){cout<<"Inside B"<<endl;
                cout<<c<<endl;}
};
class C{
protected:
    int c;
public:
    C(int z):c(z){}
    void show(){ cout<<"Inside C"<<endl;
                 cout<<c<<endl;}
};
class D:public B,public C{
public:
    D(int p):B(p), C(2*p){}
    void show(){cout<<"Inside D"<<endl;
                   //B::show();
                   }
    };
int main(){
D obj(10); //obj.display();
obj.B::show();
obj.C::show();
obj.show();
return 0;
}
