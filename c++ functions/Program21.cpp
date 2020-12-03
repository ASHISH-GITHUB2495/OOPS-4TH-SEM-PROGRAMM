#include <iostream>
#include <cstdarg>     /* va_list, va_start, va_arg, va_end */
#include<cstring>
using namespace std;

void PrintLines (char* first, ...)
{
 char* str;
  va_list vl;

  str=first;

  va_start(vl,first);
  do {
    cout<<str<<" ";
    str=va_arg(vl,char*);
  } while (str!=NULL);

  va_end(vl);
}
int main ()
{
  PrintLines ("Ankit","Sayantani","Archie","Debdeep",NULL);
  return 0;
}
