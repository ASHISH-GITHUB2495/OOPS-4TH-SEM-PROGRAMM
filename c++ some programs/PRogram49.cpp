#include<iostream>
using namespace std;
class complex{
int *real,*imag;
public:
complex(){
real=new int; imag=new int;
*real=0; *imag=0;
}
complex(int a, int b){
real=new int; imag=new int;
*real=a; *imag=b;
}
complex add(complex obj){
*real=*real+*obj.real;
*imag=*imag+*obj.imag;
return *this;
}
void show(){
cout<<*real<<" " <<*imag<<endl;
}
~complex(){cout<<"destructor"<<endl;delete real; delete imag;}
};
int main(){
complex a(1,2);
complex b(2,3);
complex result=a.add(b);
result.show();
return 0;
}
