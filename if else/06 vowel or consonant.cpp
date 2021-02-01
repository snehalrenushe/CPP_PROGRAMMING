#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I' )
    {
        cout << ch << " is a vowel. " << endl;
    }
    else
    {
        cout << ch << " is a consonant. " << endl;
    }

    getch();
    return 0;
}
