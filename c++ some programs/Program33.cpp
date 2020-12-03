#include<iostream>
using namespace std;
class A;
class B{
private:
int a,b;
friend class A;
};

class A{
private:
int a,b;
public:
void display();
void show();
};
void A:: display(){B obj;//obj.a=obj.b=100;
//cout<<obj.a<<" "<<obj.b<<endl;
}

void A::show(){
B obj;obj.a=obj.b=100;
cout<<obj.a<<" "<<obj.b<<endl;}


int main(){
A one;
one.show();
one.display();
return 0;
}

