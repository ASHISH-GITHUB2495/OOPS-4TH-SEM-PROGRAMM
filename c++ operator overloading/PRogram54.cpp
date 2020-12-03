#include<iostream>
using namespace std;
class complex{
int *real,*imag;
public:

complex(int a, int b){
real=new int; imag=new int;
*real=a; *imag=b;
}
//complex add(complex obj){
friend complex operator +(complex obj1, complex obj2){
return complex(*obj1.real+*obj2.real,*obj1.imag+*obj2.imag);
}
void show(){
cout<<*real<<" " <<*imag<<endl;
}
};
int main(){
complex a(1,2);
complex b(2,3);
//complex result=a.add(b);
complex result=a+b;
result.show();
return 0;
}
