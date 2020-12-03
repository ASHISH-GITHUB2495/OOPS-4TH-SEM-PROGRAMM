#include<iostream>
using namespace std;
class heritage_student{
    protected:
string name;
public:heritage_student(string a):name(a){}
//virtual void show(){cout<<name<<endl;}
virtual void show()=0; //pure virtual function
//~heritage_student(){cout<<"base destructor"<<endl;}
virtual ~heritage_student(){cout<<"base destructor"<<endl;}
};
class heritage_cse_student:public heritage_student{
string name_cse;
public:heritage_cse_student(string a,string b):heritage_student(a),name_cse(b){}
void show(){cout<<name_cse<<endl;}
~heritage_cse_student(){cout<<"derived destructor"<<endl;}
};
int main(){
heritage_student *obj=new heritage_cse_student("Heritage","ABC");
obj->show();
delete obj;
return 0;
}
