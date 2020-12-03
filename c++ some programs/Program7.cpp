#include<iostream>
using namespace std;
int main(){

    int **a=new int*[2];
        for(int i=0;i<2;i++)
        a[i]=new int[3];
  //for(int i=0;i<2;i++)
    //   for(int j=0;j<3;j++)
      //  cout<<(a+i)+j<<" "<<*(a+i)+j<<endl;

    cout<<"Enter Input"<<endl;
     for(int i=0;i<2;i++)
       for(int j=0;j<3;j++)
        cin >> *(*(a+i)+j);
cout<<"Output"<<endl;
    for(int i=0;i<2;i++)
         {
         for(int j=0;j<3;j++)
            {cout << *(*(a+i)+j)<<" ";}
         cout<<endl;
         }
    for(int i = 0; i < 3; ++i) {
    delete [] a[i];
}
delete [] a;
return 0;}
