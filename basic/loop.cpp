#include<iostream>
using namespace std;

int main()
{
    cout<<"For loop1..."<<endl;
    int i = 0;
    for(i;i < 10;i++)
    {
        cout<<i<<" ";
    }
    cout<<"Don't belong to for loop "<<i<<endl;
    i = 0;
    cout<<"For loop2..."<<endl;
    for(i;i < 10;++i)
    {
        cout<<i<<" ";
    }
    cout<<"Don't belong to for loop "<<i<<endl;

    i = 0;
    cout<<"While loop..."<<endl;
    while( i < 10)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<"Don't belong to while loop "<<i<<endl;
    return 0;
}