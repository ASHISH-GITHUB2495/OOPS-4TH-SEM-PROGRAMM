#include<iostream>
using namespace std;
int main(){
    int *m = new int(10); // initialization with new()
    cout << *m<<endl;

    // Pointer initialization to null
    int* p = NULL;

    // Request memory for the variable
    // using new operator
    p = new int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
    // Store value at allocated address
   //     *p = 29;
        cout << "Value of p: " << *p << endl;
    }
 // Request block of memory
    // using new operator
    float *r = new float(75.25);

    cout << "Value of r: " << *r << endl;

    // Request block of memory of size n
    int n = 5;
    int *q = new int[n];

    if (!q)
        cout << "allocation of memory failed\n";
   else
    {
        for (int i = 0; i < n; i++)
            q[i] = i+1;

        cout << "Value stored in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " "<<*(q+i)<<endl;
    }

    // freed the allocated memory
    delete p;
    delete r;

    // freed the block of allocated memory
    delete[] q;
return 0;
}
