#include<iostream>
using namespace std;

class Test
{
    int *ptr;
public:
    Test(int i = 0){ ptr = new int(i); }
    void setValue(int i) { *ptr = i; }
    void operator=(Test obj){ *ptr=*obj.ptr;}
                            //*t2.ptr=*t1.ptr//otherwise result will be 10
    Test * operator->(){ return this;}
    void print(){ cout << *ptr << endl; }
};

class op{
int *p; int size;
public:
    op(int i):size(i){p=new int[size];
              for(int n=0;n<size;n++)
                p[n]=n+1;
             }
     int operator[](int index){return p[index];}
     void operator()(int num){for(int n=0;n<size;n++)
                               p[n]+=num;
                             }//functors

     void show(){for(int n=0;n<size;n++) cout<<p[n]<<" ";}
};
int main()
{
    Test t1(5);
    Test t2;
    t2 = t1;//-->t2.operator=(t1)
    //7=t1;"bbb"=t1--> operator=(7,t1)  int a=5; int b=a
    t1.setValue(10);
    t2->print();//--->t2.operator ->()
    op obj(10);
    cout<<obj[5]<<endl;//-->obj.operator[](5)
    //obj[8]=100;// if reference is returned
    //cout<<obj[8];
    op obj2(20);
    obj2(100);//-->obj2.operator()(100)
    obj2.show();
    return 0;
}
