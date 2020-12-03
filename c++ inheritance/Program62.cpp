#include<iostream>
using namespace std;
class Hod;
//class Faculty;
//void promoted_list(Faculty *, int);
class Faculty{
string name;
int f_score, r_p; int ra;
bool promoted=false;
public:
Faculty(string n,int f_s, int r, int rnk):name(n),f_score(f_s),r_p(r),ra(rnk){}
friend class Hod;
friend void promoted_list(Faculty *, int);
void display(){cout<<name<<endl;}
};
class Hod{
public:
static void promote(Faculty &f){
if(f.f_score>80 &&f.r_p>1)
    {f.ra+=1;
    f.promoted=true;}
}
};
void promoted_list(Faculty *f, int n)
{
for(int i=0;i<n;i++)
if(f[i].promoted==true)
f[i].display();
}
int main(){
Faculty f[2]={Faculty("ab",100,2,1),Faculty("xy",80,3,1)};
for(int i=0;i<2;i++)
Hod::promote(f[i]);
promoted_list(f,2);
return 0;
}
