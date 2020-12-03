#include<iostream>
using namespace std;
template <class T>
T min(T & x,T & y){return (x<=y?x:y);}
int main(){
int a,b;
cout<<"Enter two integers"<<endl;
cin>>a>>b;
cout<<"Min:"<<min(a,b)<<endl;

float c,d;
cout<<"Enter two floats"<<endl;
cin>>c>>d;
cout<<"Min:"<<min(c,d)<<endl;

char e,f;
cout<<"Enter two char"<<endl;
cin>>e>>f;
cout<<"Min:"<<min(e,f)<<endl;
return 0;
}
