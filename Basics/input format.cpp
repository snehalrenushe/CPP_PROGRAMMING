#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    cout << "Enter any Name : " << flush;
    string name;
    cin >> name ;
    cout << "You entered " << name << endl;

    cout << "Enter a Number : " << flush;
    int value;
    cin >> value;
    cout << "You entered " << value << endl;


    getch();
    return 0;

}
