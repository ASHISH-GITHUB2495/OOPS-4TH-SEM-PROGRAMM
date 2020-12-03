#include<iostream>
using namespace std;

class book{
string name,author;
int pages;
public:
//book();
book(string,string,int);
book(){name="Abc";author="wxy";pages=100;}
void showdata(){cout<<name<<" "<<author<<" "<<pages<<endl;}
};
//book::book(){name="Abc";author="wxy";pages=100;}
book::book(string name,string author,int pages){
this->name=name;this->author=author;this->pages=pages;}//this pointer
int main(){
book b1,b2;
b1.showdata();b2.showdata();
book b3("RCN","fgh",200);
b3.showdata();
return 0;
}
