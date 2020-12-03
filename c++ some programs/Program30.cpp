#include<iostream>
using namespace std;
class A;
class C;
class B{
private:
int a,b;
friend class A;
public:
void setData(int x, int y){a=x;b=y;}
void show(){
cout<<"Printing B inside B"<<endl<<a<<endl<<b<<endl;
}
};

class A{
private:
int a,b;
public:
friend class C;
void setData(int x, int y){a=x;b=y;}
void show(){
cout<<"Printing A"<<endl;
cout<<a<<endl<<b<<endl;
B obj; obj.a=100;obj.b=200;
cout<<"Printing B inside A"<<endl;
obj.show();
}
};
class C{

public:
void show(){
A obj; obj.setData(500,600);
obj.show();
B obj2; //obj2.a=100;obj2.b=200;
}
};

int main(){
C two;
two.show();
return 0;
}


