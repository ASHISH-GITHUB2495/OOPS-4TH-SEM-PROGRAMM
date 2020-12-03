#include<iostream>
using namespace std;
int main(){
int p[2][3]={{1,2,3},{3,4,5}};
int (*c)[3];
c=p;
for(int i=0;i<2;i++)
for(int j=0;j<3;j++)
    cout<<c[i][j]<<endl;
int *d[3][3];
int a[]={1,2,3},b=10, e[]= {100,200,300};
d[0][0]=a;
d[1][0]=&b;
d[2][0]=e;
cout<<d[0]<<" "<<*d[0]<<" "<<a<<endl;
cout<<d[1]<<" "<<*d[1]<<endl;
cout<<d[2]<<" "<<*d[2]<<endl;
return 0;
}
