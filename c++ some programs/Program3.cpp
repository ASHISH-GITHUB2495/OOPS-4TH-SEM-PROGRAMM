#include <iostream>

using namespace std;

int main () {
   int  marks = 95;
   float f=5.6;   // actual variable declaration.
   void *ptr;
   ptr=&marks;
   //cout<<*ptr;//error: void* is not a pointer-to-object type
   cout<<"typecasted to int: "<<*(int*)ptr<<endl;
   ptr=&f;
   cout<<"typecasted to float: "<<*(float *)ptr<<endl;
   //int *p=&f; //what type of error will come?
   return 0;
}
