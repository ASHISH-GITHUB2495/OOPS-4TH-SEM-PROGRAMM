#include<iostream>
using namespace std;
template <class T>
class Spcl_temp
{
    T var;
public:
   Spcl_temp(T x):var(x){cout<<var<<endl;}
   T Double(){return 2*var;}
};
template <>
class Spcl_temp <string>
{
    string var;
public:
   Spcl_temp(string x):var(x){cout<<"R"<<var<<endl;}
   string Double(){return var.append(var);}
};

int main(){
Spcl_temp <int> obj1(1);
Spcl_temp <float> obj2(1.5);
Spcl_temp<string> obj3("am");
cout<<obj1.Double()<<" " <<obj2.Double()<<" "<<obj3.Double()<<endl;
return 0;
}

