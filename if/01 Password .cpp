#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    string Password = "Hello";
    cout << "Enter a Password => " << flush;

    string input;
    cin >> input;

    if(Password == input)
    {
        cout << "Password Accepted....." << endl;
    }

    if(Password != input)
    {
        cout << "Access Denied....." << endl;
    }



    getch();
    return 0;
}
