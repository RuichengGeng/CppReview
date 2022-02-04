#include<iostream>
using namespace std;

/*
Passing by Pointer: Here, the memory location of the variables is passed to the parameters in the function,
 and then the operations are performed.
*/

/*
Passing by Reference: It allows a function to modify a variable without having to create a copy of it. 
We have to declare reference variables. 
The memory location of the passed variable and parameter is the same and therefore, any change to the parameter reflects in the variable as well.
*/


void pointer_swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
void reference_swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

void passby_pointer()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
 
    pointer_swap(&a, &b);
 
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";
}

void passby_reference()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
 
    reference_swap(a, b);
 
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}


int main()
{   
    cout<<"Pass by pointer"<<endl;
    passby_pointer();
    cout<<"Pass by reference"<<endl;
    passby_reference();
    return 0;
}