#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "Array of integers " << endl;
    cout << "================= " << endl;

    int i[3];

    i[0] = 88;
    i[1] = 342;
    i[2] = 12;

    cout << i[0] << endl;
    cout << i[1] << endl;
    cout << i[2] << endl;

    /// cout << "Bad idea : " << i[3] << endl;

    getch();
    return 0;
}
