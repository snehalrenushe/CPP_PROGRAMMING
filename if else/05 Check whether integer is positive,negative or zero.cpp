#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int No;

    cout << "Enter an integer: ";
    cin >> No;

    if (No > 0)
    {
        cout << "You entered a positive integer: " << endl;
    }
    else if (No < 0)
    {
      cout << "You entered a negative integer: "  << endl;
    }
    else
    {
        cout << "You entered 0." << endl;
    }

    cout << "This line is always printed.";

    getch();
    return 0;
}
