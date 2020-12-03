#include<iostream>
using namespace std;
template<class T>
T area(T side)
{
return side*side;
}
template<class T>
T area(T length, T breadth)
{
return length*breadth;
}
template<class T>
float area(T rad, float PI)
{
return PI*rad*rad;
}
int main(){
int side;
cout<<"Enter side of a square"<<endl;
cin>>side;
cout<<"Area of the square is "<<area(side)<<endl;
int l,b;
cout<<"Enter length and breadth of a rectangle"<<endl;
cin>>l>>b;
cout<<"Area of the rectangle is "<<area(l,b)<<endl;
int radius;
cout<<"Enter radius of a circle"<<endl;
cin>>radius;
cout<<"Area of the circle is "<<area(radius,3.14)<<endl;

return 0;
}
