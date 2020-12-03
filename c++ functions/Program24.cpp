#include<iostream>
using namespace std;
void add(int, int,int=100, int=100);
void add();
int add();
void add(int,int,int);
void add(int);
int main(){
add();
//add(0,1,2);
add(0,1,2,3);
add(1);
return 0;
}
int add(){ return 9;}
void add(int a, int b, int c, int d){
cout<<"Addition is "<<a+b+c+d<<endl;
}
void add(){cout<<"HI"<<endl;}

void add(int a, int b, int c){cout<<a+b+c<<endl;}

void add(int a){cout<<a<<endl;}

