#include<iostream>
using namespace std;
namespace n2{
void meth2();
}
void n2::meth2(){cout<<"Inside n2::meth2()"<<endl;}

void meth2(){cout<<"Inside meth2"<<endl;}

int main(){n2::meth2(); ::meth2();}
