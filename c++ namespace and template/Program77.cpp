#include<iostream>
using namespace std;

class B;
class A{
int x;
public:
A(int m):x(m){}
friend void swap(A&, B&);
void show(){cout<<x<<endl;}
};
class B{
int x;
public:
B(int m):x(m){}
friend void swap(A&, B &);
void show(){cout<<x<<endl;}
};
void swap(A & obj1,B & obj2){
int temp;
temp=obj1.x;
obj1.x=obj2.x;
obj2.x=temp;
}
int main(){
A a(10);
B b(20);
cout<<"Before swap"<<endl;
a.show(); b.show();
swap(a,b);
cout<<"After swap"<<endl;
a.show();
b.show();
return 0;
}

