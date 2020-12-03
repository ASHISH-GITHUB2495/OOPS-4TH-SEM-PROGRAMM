#include<iostream>
using namespace std;
struct student{
string name;
string roll;
int age;
void display(){
cout<<endl << "Name: "<<name <<endl << "Roll: "<<roll <<endl <<"Age: "<< age << endl<< endl;
}
void input(){
cout<< "Enter Input" <<endl;
cout<< "Enter Name" <<endl;
getline(cin, name);
cout<< "Enter Roll" <<endl;
getline(cin, roll);
cout<< "Enter Age" <<endl;
cin>> age;
cin.ignore();
}
};
int main(){
student s[5];
for(int i=0;i<5;i++)
{
    s[i].input();
    s[i].display();
}
return 0;
}
