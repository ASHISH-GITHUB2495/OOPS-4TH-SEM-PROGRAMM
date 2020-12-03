#include<iostream>
using namespace std;
namespace n1{
void meth1(){cout<<"Inside n1"<<endl;}
}
namespace n2{
void meth1(); //defining outside
}
void n2::meth1(){cout<<"Inside n2"<<endl;}
int main(){n1::meth1();n2::meth1();}
