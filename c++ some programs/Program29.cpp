#include<iostream>
using namespace std;
class A;
class B{
private:
int a,b;
friend class A;
public:
void setData(int x, int y){a=x;b=y;}
void show();
};

class A{
private:
int a,b;
public:
void setData(int x, int y){a=x;b=y;}
void show(){
cout<<"Printing A"<<endl;
cout<<a<<endl<<b<<endl;
B obj; obj.a=100;obj.b=200;
cout<<"Printing B"<<endl;
obj.show();
}
};
void B::show(){
cout<<a<<endl<<b<<endl;
//A obj; obj.a=99;obj.b=299;
}
int main(){
A one;
one.setData(10,20);
one.show();
B two;
two.setData(50,60);
two.show();
cin>>cout;
return 0;
}


