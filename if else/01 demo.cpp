#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "1.\tCreate new record." << endl;
    cout << "2.\tDelete record." << endl;
    cout << "3.\tView record." << endl;
    cout << "4.\tSearch record." << endl;
    cout << "5.\tQuit." << endl;

    cout << "Enter Your Selection=> " << flush;

    int value;
    cin >> value;

    if(value < 3)
    {
        cout << "Insufficient privileges to use these menu option." << endl;
    }
    else
    {
        cout << "Privileges level sufficient." << endl;
    }

    if(value == 5)
    {
        cout << "Quiting .........." << endl;
    }
    else
    {
        cout << "Not Quiting........." << endl;
    }

    getch();
    return 0;

}
