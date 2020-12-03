#include<iostream>
using namespace std;
class B{
private:
int a,b,c;
public:
B(int x, int y):a(x),b(y),c(2*b){}
//B(int x, int y):a(x),c(y),b(c){}
void show(){cout<<a<<" "<<b<<" "<<c<<endl;}
};
int main(){
B obj(10,20);
obj.show();
return 0;
}
