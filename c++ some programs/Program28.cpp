#include<iostream>
using namespace std;
class faculty_ece;
class faculty_cse{
int faclty_id;

friend void hod(faculty_cse obj)
{cout<<"inside hod function "<<obj.faclty_id<<endl;}

friend void swap(faculty_cse &, faculty_ece &);

public:
    string dep;
    void setdata(int a, string d){faclty_id=a;dep=d;}
    void showdata(){cout<<"inside faculty_cse "<<faclty_id<<" "<<dep<<endl;}
    friend class A;
};
class faculty_ece{
int faclty_id;
public:
    string dep;
    void setdata(int a, string d){faclty_id=a;dep=d;}
    void showdata()
    {cout<<"inside faculty_ece "<<faclty_id<<" "<<dep<<endl;}
    friend void swap(faculty_cse &, faculty_ece &);
};
void swap(faculty_cse & ob1, faculty_ece & ob2){
int temp;
temp=ob1.faclty_id;
ob1.faclty_id=ob2.faclty_id;
ob2.faclty_id=temp;
}
class A{
public:
    void showdata()
    {faculty_cse ob1;ob1.setdata(1,"IT");
    cout<<"Inside A "<<ob1.faclty_id<<" "<<ob1.dep<<endl;
    }
};

int main(){
faculty_cse f1;
f1.setdata(123, "n/w");
f1.showdata();
faculty_ece f2;
f2.setdata(456,"communication");
f2.showdata();

hod(f1);

swap(f1,f2);
f1.showdata();
f2.showdata();

A obj;
obj.showdata();
return 0;
}



