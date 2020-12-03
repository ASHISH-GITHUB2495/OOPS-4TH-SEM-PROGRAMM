#include<iostream>
#include"namespace_example.h"
using namespace std;
using namespace n1;
float area(int r){return PI*r*r; }

int main(){
int a[]={1,2,3,4,6};
cout<<avg(a,5)<<endl;
cout<<area(1);
}

