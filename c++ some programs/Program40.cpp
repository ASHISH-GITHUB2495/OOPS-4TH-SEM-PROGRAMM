#include<iostream>
using namespace std;
class faculty_cse{
int faclty_id;
public:
    string dep;
    faculty_cse(int a, string d){faclty_id=a;dep=d;}
    void showdata()const{
    cout<<"inside faculty_cse "<<faclty_id<<" "<<dep<<endl;
    //faclty_id=222;
    }
    void change_dept(string dep){this->dep=dep;}
    };
int main(){
faculty_cse f1(123,"n/w");
f1.showdata();
f1.change_dept("ECE");
f1.showdata();
const faculty_cse f2(456,"n/w");
f2.showdata();
//f2.change_dept("AEIE");
return 0;
}
