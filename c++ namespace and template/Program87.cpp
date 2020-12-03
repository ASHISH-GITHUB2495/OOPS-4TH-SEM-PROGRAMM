#include<iostream>
using namespace std;
class student{
public:
int roll; string name;
friend ostream &operator<<( ostream &output, const student &D ) {
         output << "Roll : " << D.roll << " Name : " << D.name;
         return output;
      }

friend istream &operator>>( istream  &input, student &D ) {
         input >> D.roll >> D.name;
         return input;
      }
};
int main(){
student t;
cin>>t;
cout<<t;

return 0;
}
