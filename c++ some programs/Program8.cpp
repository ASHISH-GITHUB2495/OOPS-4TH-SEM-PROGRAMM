#include<iostream>
using namespace std;
void display(int *p,int n)   //int * p= arr
{
for(int i=0;i<n;i++)
    cout<<"address "<<(p+i)<<" value "<<*(p+i)<<endl;
}
void display_string(char *p, int n) //char *p=s
{
for(int i=0;i<n;i++)//p[i]!='\0'
    cout<<*(p+i);
}
int main(){
int arr[]={1,2,3,4,5,6};
int n1=sizeof(arr)/sizeof(arr[0]);
char s[]="abcdef";
int n2=sizeof(s)/sizeof(s[0]);
display(arr,n1);
display_string(s,n2);
return 0;
}
