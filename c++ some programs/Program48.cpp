#include<iostream>
using namespace std;
class test{
int a;
public:
test(int i):a(i){}
void show(){cout<<"show "<<a<<endl;}
};

int main(){

test *t2[2]={new test(3),new test(4)};//array of pointers to object
t2[0]->show();//for loop can be used
test *t3[3];
t3[0]=new test(10);//for loop can be used
t3[0]->show();
test t4[4]={test(15), test(16), test(17), test(18)};//array of objects
t4[2].show();
return 0;
}
