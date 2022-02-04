#include<iostream>
using namespace std;
int main()
{
    /*
    A pointer is a variable that holds memory address of another variable. 
    A pointer needs to be dereferenced with * operator to access the memory location it points to. 
    */
   /*
    A reference variable is an alias, that is, another name for an already existing variable. 
    A reference, like a pointer, is also implemented by storing the address of an object. 
    A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!)
     with automatic indirection, i.e the compiler will apply the * operator for you.
   */
    int a = 10,b = 20;

    int *p = &a;
    //or int *p = NULL;
    //   p = &a;
    cout<<"The value of p = "<<*p<<endl;
    cout<<"Address if a:"<<&a<<endl;
    cout<<"Address if p:"<<&p<<endl;
    int &r = a; 
    // but it will be incorret to be: int&p = a; p = a;
    cout<<"The value of r = "<<r<<endl;
    cout<<"Address if a:"<<&a<<endl;
    cout<<"Address if r:"<<&r<<endl;


    return 0;
}