#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int No1 = 7;
    int No2 = 3;

    if(No1 >= 3)
    {
        cout << "Condition1 : True " << endl;
    }
    else
    {
        cout << "Condition1 : False " << endl;
    }

    if(No2 == 5)
    {
        cout << "Condition2 : True " << endl;
    }
    else
    {
        cout << "Condition2 : False " << endl;
    }

    if(No1 != No2)
    {
        cout << "Condition3 : True " << endl;
    }
    else
    {
        cout << "Condition3 : False " << endl;
    }

    if(No2 <= 1)
    {
        cout << "Condition4 : True " << endl;
    }
    else
    {
        cout << "Condition4 : False " << endl;
    }

    if(No1 == 7 && No2 == 3)
    {
        cout << "Condition5 : True " << endl;
    }
    else
    {
        cout << "Condition5 : False " << endl;
    }

    if(No1 == 7 || No2 == 3)
    {
        cout << "Condition6 : True " << endl;
    }
    else
    {
        cout << "Condition6 : False " << endl;
    }

    bool condition1 = (No2 != 8) && (No1 == 10);
    cout << condition1 << endl;

    bool condition2 = No1 < 10;
    cout << condition2 << endl;

    if(condition1 || condition2)
    {
        cout << "Condition7 : True " << endl;
    }
    else
    {
        cout << "Condition7 : False " << endl;
    }


    getch();
    return 0;

}
