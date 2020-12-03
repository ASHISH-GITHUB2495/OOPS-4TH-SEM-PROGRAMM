#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
int age;int num, den;

try{
cin>>age;
if(age>60)
    throw "Age out of range";
if(age<0)
    throw -1;
cin>>num>>den;
if(den==0) throw runtime_error("divide by zero");
}
catch(int err){
    cout<<"Error code "<<err<<", please insert proper value"<<endl;}
catch(const char* str){
    cout<<str<<", age must be between 18-60"<<endl;}
catch(runtime_error e){cout<<"divide by 0"<<endl;}
                        //cout<<e.what();}

return 0;
}
