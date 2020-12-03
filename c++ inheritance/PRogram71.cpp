#include<iostream>
using namespace std;
class shape{
protected:
    int dim1,dim2;
public:
shape(int x,  int y):dim1(x),dim2(y){}
virtual void area()=0;
virtual ~shape(){cout<<"dest of shape"<<endl;}
};

class rectangle:public shape{
public:
rectangle(int x, int y):shape(x,y){}
void area(){cout<<dim1*dim2<<endl;}
~rectangle(){cout<<"dest of rectangle"<<endl;}
};

class square:public shape{
public:
square(int x):shape(x,x){}
void area(){cout<<dim1*dim2<<endl;}
~square(){cout<<"dest of square"<<endl;}
};
int main(){
shape *ptr;
ptr=new rectangle(2,3);
ptr->area();
delete ptr;
ptr=new square(4);
ptr->area();
delete ptr;
return 0;
}

