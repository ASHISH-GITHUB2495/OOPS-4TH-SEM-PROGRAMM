#include<iostream>
using namespace std;
int main(int argc, char **argv, char** envp){
int i=0;
for(;i<argc;i++)
    cout<<argv[i]<<endl;
while(i<=20)
cout<<envp[i++]<<endl;
return 0;}

