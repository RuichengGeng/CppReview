#include<iostream>
using namespace std;

int main()
{
    int yyyymmdd;
    cout<<"Please input yyyymmdd"<<endl;
    cin >> yyyymmdd;
    cout<<"The date is : "<<yyyymmdd<<endl;
    int yyyy = yyyymmdd / 10000;
    int mm = yyyymmdd / 100 - yyyy * 100;
    int dd = yyyymmdd - yyyy * 10000 - mm * 100;
    cout<<"Year:"<<yyyy<<" Month:"<<mm<<" Date:"<<dd<<endl;

    // start calculation of weekday
    // w = 0 means saturday, 1 means sunday etc..
    int t = (12 - mm)/10;
    int y = yyyy - t;
    int m = mm + 12 * t;
    int c = y / 100;
    int Y = y % 100;
    int temp1 = Y / 4;
    int temp2 = c/4;
    int temp3 = 26 * (m + 1)/10;
    int weekday = (dd + Y + temp1 + c/4 + 5 * c + temp3) %7;
    cout<< "Week day = "<<weekday<<endl;



    return 0;
}