#include<iostream>
using namespace std;
class test{
int a;
public:
test(int i):a(i){}
void show(){cout<<"show "<<a<<endl;}
~test(){cout<<"destructor called"<<endl;}
};
int main(){
test t(12);
test *t2=&t;//pointer to object
t2->show();
delete t2;

test &t3=t;//reference to statically created object
t3.show();
test &t4=*(new test(24));//reference to dynamically created object
t4.show();

test *t5=new test(100);
t5->show();
delete t5;
}
