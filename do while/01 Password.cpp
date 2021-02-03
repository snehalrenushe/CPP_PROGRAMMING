#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    string Password = "Hello";

    string input;

    do
    {
        cout << "Enter your Password => " << flush;
        cin >> input;

        if(Password != input)
        {
            cout << " Access Denied." << endl;
        }

    }while(input != Password);


    cout << " Password Accepted." << endl;


    getch();
    return 0;
}

