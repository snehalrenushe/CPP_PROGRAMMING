#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int values[] = {4,5,3,2};

    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;

    for(int i = 0 ; i < 4 ; i++)
    {
        cout << values[i] << " " << flush;
    }

    cout << endl;

    getch();
    return 0;
}
