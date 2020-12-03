// CPP program to demonstrate
// Overloading new and delete operator
// for a specific class
#include<iostream>
#include<cstdlib>
int s_global= 5;
using namespace std;
class student
{
	string name;
	int s;
	int *a;
	public:
	student()
	{
		cout<< "Constructor is called\n" ;
	}
	student(string name){
	    cout<<"inside cons name"<<endl;
	    this->name=name;
        cout<<"Enter values"<<endl;
        for(int i=0;i<this->s;i++)
            cin>>a[i];
            }
	student(string name, int s)
	{   cout<<"inside cons name, s"<<endl;
		this->name = name;
		this->s=s;
		cout<<"Enter values"<<endl;
        for(int i=0;i<this->s;i++)
            cin>>a[i];
	}
	void display()
	{
		cout<< "Name:" << name << endl;
		for(int i=0;i<s;i++)
		cout<< a[i] <<" "<< endl;
	}
	void * operator new(size_t size)
	{
		cout<< "Overloading new operator with size: " << size << endl;
		void * p = ::new student;
		//void * p = malloc(size); //will also work fine
        student *t=(student*)p;
        t->a= new int[s_global];
        return p;
	}
	void * operator new(size_t size, int s)
	{
		cout<< "Overloading new operator with size and int: " << size <<" "<<s<< endl;
		void * p = ::new student;
		//void * p = malloc(size); will also work fine
        student *t=(student*)p;
        t->s=s;
        t->a= new int[t->s];
		return p;
	}

	void operator delete(void * p)
	{
		cout<< "Overloading delete operator " << endl;
        student *t=(student*)p;
		delete t->a;
		//free(p);
        ::delete t;
	}
	~student(){cout<<"destructor is called"<<endl;}
};

int main()
{
    student * p = new student("Yash",s_global);
	p->display();
	delete p;
	student *q = new (3)student("abc");
	delete q;
}
