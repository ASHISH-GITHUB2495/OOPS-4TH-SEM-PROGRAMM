#include<iostream>
using namespace std;
class test{
string name;
public:
test(string n):name(n){ cout<<"Cons for "<<name<<endl;}
~test(){cout<<"dest for "<<name<<endl;}
};
int main(){
cout<<"First"<<endl;
test one("First");
  {cout<<"Second"<<endl;
   test two("Second");
    {cout<<"Third"<<endl;
     test three("Third");
     cout<<"Third"<<endl;
    }
 cout<<"Second"<<endl;
  }
 cout<<"First"<<endl;

 return 0;
}
