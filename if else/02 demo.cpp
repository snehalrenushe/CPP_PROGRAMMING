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

    if(value == 1)
    {
        cout << "Creating new record....." << endl;
    }
    else if(value == 2)
    {
        cout << "Deleting the record......." << endl;
    }
    else if(value == 3)
    {
        cout << "Viewing the record....." << endl;
    }
    else if(value == 4)
    {
        cout << "Searching the record......" << endl;
    }
    else if(value == 5)
    {
        cout << "Quitinggggg.........." << endl;
    }
    else
    {
        cout << "Invalid option..........." << endl;
    }

    getch();
    return 0;

}
