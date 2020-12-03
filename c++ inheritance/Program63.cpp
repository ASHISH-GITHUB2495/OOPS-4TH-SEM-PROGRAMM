#include<iostream>
using namespace std;
class A{
public:
A(){cout<<"no argument constructor of base class"<<endl;};
A(int y){cout<<"one argument constructor of base class"<<endl;};
};

class B: public A{
public: B():A(){cout<<"no argument constructor of derived class"<<endl;};
B(int x):A(){cout<<"one argument constructor of derived class"<<endl;}; // call the no argument constructor of base class
//B(int x):A(x){cout<<"one argument constructor of derived class"<<endl;};
};
int main(){
B obj;
B obj2(10);
}
