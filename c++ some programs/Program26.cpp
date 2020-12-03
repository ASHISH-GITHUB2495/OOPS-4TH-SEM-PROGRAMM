#include<iostream>
using namespace std;
class A{
public:
int a,b;

A add(A ob){
A result;
result.a=a+ob.a;//--->result.a=one.a+two.a
result.b=b+ob.b;
return result;
}

void show(){
cout<<a<<endl<<b<<endl;
}
};
int main(){
A one;
one.a=10;one.b=20;
A two;
two.a=10;two.b=20;
A three=one.add(two);
three.show();
return 0;
}


