#include<iostream>
using namespace std;
#define maxsize 5
template <class T>
class Stack{
    T var[maxsize]; int top;
public:
    Stack(){top=-1;}
    void push(T x){if(top==maxsize-1)
                    cout<< "Overflow"<<endl;
                   else{
                     var[++top]=x;
                     cout<<"element pushed"<<var[top]<<endl;
                     }
                  }
    T pop();
    };
 template <class T>
 T Stack<T>::pop(){
       if (top==-1) {
        cout<<"underflow"<<endl;
        return -1;}
      else
        return var[top--];
      }

int main(){
Stack<int> obj;
obj.pop();
for(int i=0;i<=maxsize;i++)
    obj.push(i);
cout<<"element popped"<<obj.pop()<<endl;
cout<<"element popped"<<obj.pop()<<endl;

Stack<float> obj2;
obj2.pop();
for(int i=0;i<=maxsize;i++)
    obj2.push(i+1.5);
cout<<"elemenet popped"<<obj2.pop()<<endl;
cout<<"element popped"<<obj2.pop()<<endl;
return 0;
}

