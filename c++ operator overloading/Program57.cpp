#include<iostream>
using namespace std;
class op{   //functor
int counter=0;
public:
     int operator()(int num){return counter+=num;}
};
int main()
{
op obj;
cout<<obj(10)<<endl;//functor
cout<<obj(20);
return 0;
}
