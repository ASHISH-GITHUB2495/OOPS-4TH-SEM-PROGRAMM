#include<iostream>
#include<exception>
using namespace std;
class userdefined:public exception
{public:
const char * what() const throw(){ return "out of range";}
};
void func(){
int age;
try{
cin>>age;
if(age>60)
    throw userdefined();
}
catch(userdefined & obj){cout<<obj.what()<<endl;throw;}
}
int main(){

try{
func();
//throw -1;
}
catch(userdefined & obj){cout<<"main "<<obj.what()<<endl;}
//catch(int a){}
catch(...){cout<<"exception occured";}
return 0;}
