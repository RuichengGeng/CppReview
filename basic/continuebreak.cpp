#include<iostream>
using namespace std;

int main()
{
    // test break
    cout<<"Break"<<endl;
    int i = 0;
    for(i; i < 10;i++)
    {
        for(int j = i;j < 10;j++)
        {
            if(j % 2 == 0){
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }


    // test continue
    cout<<"continue"<<endl;
    i = 0;
    for(i; i < 10;i++)
    {
        for(int j = i;j < 10;j++)
        {
            if(j % 2 == 0){
                continue;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}