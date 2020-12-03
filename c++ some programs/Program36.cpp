#include<iostream>
using namespace std;

class test{
int num; const string name;
public:
test(int a) : num(a){}//name="abc";} //const member
test(){ num=0;}//name="";}
test(int a, string b);
};
test::test(int  a, string b):num(a),name(b){}
int main(){
test one;
test two(12);
test three(100, "ABC");
return 0;
}
