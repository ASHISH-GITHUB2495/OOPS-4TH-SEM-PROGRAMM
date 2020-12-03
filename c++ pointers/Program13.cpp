#include<iostream>
using namespace std;
int main(){
int r=7;
int const *q=&r;//same as const int *q=&r;
cout<<"q= "<<q<<endl<<"*q= "<<*q<<endl;
cout<<"after"<<endl;
//*q=10; //assignment of read-only location '*q'
r=100;
q++;
cout<<"q= "<<q<<endl<<"*q= "<<*q<<endl;
cout<<"r= "<<r<<endl;
int * const s=&r;
cout<<"s= "<<s<<endl<<"*s= "<<*s<<endl;
*s=200;
cout<<"r= "<<r<<endl;
//s++;//increment of read only variable s
const int * const t=&r;
//*t=100;//assignment of read-only location '*(const int *)t'
//t++;//increment of read-only variable t
return 0;
}
