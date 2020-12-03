#include<iostream>
using namespace std;
class A{
public:
int a,b;

void add(A ob){ //ob=two
ob.a+=a;  //-->   two.a=two.a+one.a
ob.b+=b; //---> two.b+=one.b
//a+=ob.a;b+=ob.b;//---> one.a+=two.a; one.b+=two.b
}

void add_ref(A & ob){
ob.a+=a;
ob.b+=b;
}
void add( A * ob){
ob->a+=a;
ob->b+=b;
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
cout<<"Call by value"<<endl;
one.add(two);
cout<<"showing one"<<endl;
one.show();
cout<<"showing two"<<endl;
two.show();
cout<<"Call by reference"<<endl;
one.add_ref(two);
cout<<"showing one"<<endl;
one.show();
cout<<"showing two"<<endl;
two.show();
cout<<"Call by address"<<endl;
one.add(&two);
cout<<"showing one"<<endl;
one.show();
cout<<"showing two"<<endl;
two.show(); return 0;
}



