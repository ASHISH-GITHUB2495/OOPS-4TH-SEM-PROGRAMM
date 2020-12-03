#include<iostream>
using namespace std;
class student{
private:
string name;//instance variables
string roll;
public:
void display(){
cout<<endl << "Name: "<<name <<endl << "Roll: "<<roll <<endl;
}
student(string ,string );
~student(){cout<<"Destructor of student class is called"<<endl;}
};
student :: student(string n,string r):name(n),roll(r){
cout<<"Constructor of student class is called"<<endl;
}
class cse_student:public student{
bool acm_member;
public:
cse_student(string name,string roll,bool a_m):student(name,roll),acm_member(a_m){
cout<<"Constructor of cse student class is called"<<endl;
}
~cse_student(){cout<<"Destructor of cse student class is called"<<endl;}
//void display(){student::display();
  //             cout<<acm_member<<endl;}
};
int main(){
cse_student c("ab","12",true);
c.display();
return 0;
}
