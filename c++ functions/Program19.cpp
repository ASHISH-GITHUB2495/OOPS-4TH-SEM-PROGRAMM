#include <iostream>
#include <cstdarg>
using namespace std;
void sum(string msg,...)
 {
 va_list valist; int i,arg,total=0;
 va_start(valist, msg);
     while((arg=va_arg(valist,int))!= 0) { //access all the arguments assigned to valist
        total += arg; }
 va_end(valist); //clean memory reserved for valist
 cout<<msg<<total<<endl;
}
int main() {
sum("The sum of 1+2+3 is ",1,2,3,0);
sum("The sum of 1+2+3+4 is ",1,2,3,4,0);

return 0;
}
