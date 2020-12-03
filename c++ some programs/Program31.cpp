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
friend class B;
void setData(int x, int y){a=x;b=y;}
void show(){
B obj; obj.a=100;obj.b=200;
cout<<"Printing B inside A"<<endl;
cout<<obj.a<<" "<<obj.b<<endl;
}
};
void B::show(){
cout<<"Printing A inside B"<<endl;
A obj; obj.a=99;obj.b=299;
cout<<obj.a<<" "<<obj.b<<endl;
}
int main(){
A one;
one.show();
B two;
two.show();
return 0;
}


