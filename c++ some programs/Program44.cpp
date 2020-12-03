#include<iostream>
using namespace std;
class test{
    static int obj_count;
    static int obj_alive;
public:
test(){ obj_count++;obj_alive++;}
~test(){obj_alive--;}
void show(){cout<<obj_count<<"         " << obj_alive<<endl;}
};
int test:: obj_count, test:: obj_alive=0;
int main(){
cout<<"Created"<<" "<<"Alive"<<endl;
test one;
one.show();
{
    test two;
    two.show();
    {
      test three;
      three.show();
    }
     two.show();
}
 one.show();
return 0;
}
