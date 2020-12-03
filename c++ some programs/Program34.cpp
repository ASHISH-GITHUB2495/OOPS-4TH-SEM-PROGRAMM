#include<iostream>
using namespace std;
class faculty_cse{
private:
static string college;
public:
//static string dep="CSE";
static string dep;
string name;
static void show(){
//cout<<name<<endl;
cout<<dep<<endl;
cout<<college<<endl;
}
};
string faculty_cse::dep="CSE";
string faculty_cse::college="heritage";
int main(){
faculty_cse f1;
f1.name="Nilanjana";
f1.show();
f1.dep="IT";
f1.show();
cout<<faculty_cse::dep<<endl;
//cout<<faculty_cse::college<<endl;
return 0;
}
