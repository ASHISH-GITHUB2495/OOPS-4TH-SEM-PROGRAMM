#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    cout<<"Number of elements between two pointer are:"<<
                                (ptr2 - ptr1);
    cout<<"Number of bytes between two pointers are: "<<
                              (char*)ptr2 - (char *)ptr1;
    return 0;
}
