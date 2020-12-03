#include<iostream>
using namespace std;
template<class T>
class matrix{
T **m; int row,col;
public:
matrix(int r, int c):row(r),col(c){
m=new T*[row];
for(int i=0;i<row;i++)
    m[i]=new T[col];

cout<<"Enter values"<<endl;
for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    cin>>m[i][j];
}
matrix(){}

matrix operator *(matrix obj);
void display(){
for(int i=0;i<row;i++)
    {for(int j=0;j<col;j++)
     {cout<<m[i][j]<<" ";}
    cout<<endl;
    }
}
~matrix(){
for (int i=0;i<row;i++)
delete m[i];
delete m;
}
};
template<class T>
matrix<T> matrix<T>::operator *(matrix<T> obj)
{
matrix<T> result;
result.row=row; result.col=obj.col;
result.m=new T*[result.row];
for(int i=0;i<result.row;i++)
    result.m[i]=new T[result.col];
for(int i=0;i<result.row;i++)
    for(int j=0;j<result.col;j++)
    result.m[i][j]=static_cast <T> (0);
for(int i=0;i<row;i++)
    {for(int j=0;j<obj.col;j++)
    {for(int k=0;k<matrix<T>::col;k++)
        result.m[i][j]+=m[i][k]*obj.m[k][j];
    }}
return result;
}
int main(){
matrix<int> m1(2,3);
matrix<int> m2(3,2);
m1.display();
m2.display();
matrix<int> m3=m1*m2;
m3.display();
}
