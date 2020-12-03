#include<iostream>
using namespace std;
int main()
{
int arr[5] = { 1, 2, 3, 4, 5 };
int *p = arr;
int (*ptr)[5]; //pointer to an array
ptr = &arr;
cout<<"p= "<<p<<" "<<"ptr= "<<ptr<<" "<<"arr= "<<arr<<endl;
//how to access all the elements via pointer to an array?
cout<<*(*ptr+1)<<" "<<*(*ptr+2)<<endl;
p++;
ptr++;
cout<<endl<<"After incrementing"<<endl;
cout << "p= " << p <<" ptr= "<< ptr<<" "<<"arr+5= "<<arr+5<<endl;
p--;ptr--;
cout<<endl<<"Decremented"<<endl;
cout << "*p = "<< *p <<", *ptr = " << *ptr << endl;

cout << "sizeof(p) = "<< sizeof(p) <<
            ", sizeof(*p) = " << sizeof(*p) << endl;
cout << "sizeof(ptr) = "<< sizeof(ptr) <<
        ", sizeof(*ptr) = " << sizeof(*ptr) << endl;
return 0; //what is the difference between arr and &arr?
}
