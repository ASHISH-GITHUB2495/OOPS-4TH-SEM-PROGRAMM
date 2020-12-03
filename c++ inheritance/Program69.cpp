#include<iostream>
using namespace std;
class heritage_student{
protected:
string name;
public:heritage_student(string a):name(a){}
virtual void show(){cout<<name<<endl;}
};
class heritage_cse_student:public heritage_student{
string name_cse;
public:heritage_cse_student(string a,string b):heritage_student(a),name_cse(b){}
void show(){cout<<name<<" "<<name_cse<<endl;}
};
int main(){
/*heritage_student obj("XYZ");
heritage_cse_student obj2("XYZ","Shreyansh");
obj=obj2;
obj.show();*/
heritage_student *obj3;
heritage_cse_student obj4("XYZ","Shreyansh"); //IS-A relationship
obj3=&obj4;
obj3->show();
heritage_student *obj5=new heritage_cse_student("XYZ","Shreyansh");
obj5->show();
return 0;
}
