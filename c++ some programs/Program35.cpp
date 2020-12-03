#include<iostream>
using namespace std;
class student{
private:
string name;//instance variables
string roll;
int marks[3];
public:
int total=0;
string getName(){return name;}
void display(){
cout<<endl << "Name: "<<name <<endl << "Roll: "<<roll <<endl;
for(int i=0;i<3;i++)
{
    cout<<"marks of subject["<<i+1<<"] "<<marks[i]<<endl;
}
cout<<"Total marks"<<total<<endl<<endl;
}
void input();
static int topper(student *);
};
void student::input(){
cout<< "Enter Input" <<endl;
cout<< "Enter Name" <<endl;
getline(cin, name);
cout<< "Enter Roll" <<endl;
getline(cin, roll);
for(int i=0;i<3;i++)
{
cout<<"Enter marks of subject["<<i+1<<"]"<<endl;
cin>>marks[i];
total+=marks[i];
}
cin.ignore();
}
int student::topper(student *obj){
int t=0;
for(int i=1;i<3;i++)
if(obj[i].total>obj[t].total)
    t=i;
return t;
}
int main(){
student s[3];
for(int i=0;i<3;i++)
{
    s[i].input();//s[i] is an instance of the class student
    s[i].display();
}
cout<<"Topper is "<<s[student::topper(s)].getName()<<", with marks "<<s[student::topper(s)].total;
return 0;
}
