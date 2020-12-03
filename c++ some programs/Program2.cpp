#include <iostream>
using namespace std;

int main () {
   int  marks = 95;   // actual variable declaration.
   int  *int_ptr;    // pointer variable

   int_ptr = &marks;// store address of var in pointer variable, 					referencing

   cout << "Value of marks variable: ";
   cout << marks << endl;
   cout << "Address of marks variable: ";
   cout << &marks << endl;
// print the address stored in int_ptr variable
   cout << "Address stored in int_ptr variable: ";
   cout << int_ptr << endl;

   // access the value at the address available in pointer
   cout << "Value of *int_ptr variable: ";
   cout << *int_ptr << endl;
   *int_ptr=10;//dereferencing with indirection operator
   cout<< "Value of *int_ptr variable: "<<*int_ptr<<endl<<"Value of the marks "<<marks<<endl;

   return 0;
   }

