#include<iostream>
using namespace std;

class faculty_cse{
int faclty_id;
public:
    string dep;
    void setdata(int a, string d){faclty_id=a;dep=d;}
    void showdata()const{
    cout<<"inside faculty_cse "<<faclty_id<<" "<<dep<<endl;
    }
    void join_dep(faculty_cse const f){
    //f.dep="BT"; //this line will give compiler error in next slide
    dep=f.dep;faclty_id=f.faclty_id+10;}
};
int main(){
faculty_cse f1;
f1.setdata(123, "n/w");
f1.showdata();
faculty_cse f2;
f2.join_dep(f1);
f2.showdata();
return 0;
}
