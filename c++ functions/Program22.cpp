#include <iostream>
#include <cstdarg>     /* va_list, va_start, va_arg, va_end */
using namespace std;
void PrintFloats (int n, ...)
{
  int i;
  double val;
  cout<< "Printing floats:";
  va_list vl;
  va_start(vl,n);
   for (i=0;i<n;i++)
  {
    cout<<va_arg(vl,double);
    //cout<<val<< " ";
  }
  va_end(vl);
  cout<<endl;
}
int main ()
{
  PrintFloats (3,3.14159,2.71828,1.41421);
  return 0;
}
