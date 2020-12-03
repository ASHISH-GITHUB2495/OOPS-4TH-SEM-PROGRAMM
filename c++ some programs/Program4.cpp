#include <iostream>
using namespace std;
int main () {
   int *ptr, a[]={0,1,2,3,4,5,6,70,8,9};
   ptr=a;//a means the base address of the array a

 for(int i=0;i<10;i++)
    cout<<"address"<<(ptr+i)<<" value "<<*(ptr+i)<<endl;

   cout<<"First element "<<*ptr<<endl;
   ptr=ptr+5;

   cout<<"after +5 "<<*ptr<<endl;
   ptr--;
   cout<<"after decrementing "<<*ptr<<endl;
   ptr++;
   cout<<"after incrementing "<<*ptr<<endl;
   cout<<"multiplicating *ptr and *(ptr+2) "<<*ptr * *(ptr+2)<<endl;
   cout<<"multiplicating *ptr and (*ptr+2) "<<*ptr * (*ptr+2)<<endl;
   //ptr=ptr*2; //not valid
   //ptr=ptr/2;//not valid
   return 0;
   }
