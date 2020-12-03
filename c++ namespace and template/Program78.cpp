#include<iostream>
using namespace std;
template<class T>
class B;
template<class T>
class A{
T x;
public:
A(T m):x(m){}
template<class U>
friend void swap(A<U>&, B<U>&);
void show(){cout<<x<<endl;}
};
template<class T>
class B{
T x;
public:
B(T m):x(m){}
template<class U>
friend void swap(A<U>&, B<U> &);
void show(){cout<<x<<endl;}
};
template<class T>
void swap(A<T> & obj1,B<T> & obj2){
T temp;
temp=obj1.x;
obj1.x=obj2.x;
obj2.x=temp;
}
int main(){
A<int> a(10);
B<int> b(20);
cout<<"Before swap"<<endl;
a.show(); b.show();
swap(a,b);
cout<<"After swap"<<endl;
a.show();
b.show();
return 0;
}

