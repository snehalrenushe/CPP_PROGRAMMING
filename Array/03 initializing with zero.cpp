#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "Initializing with zero values " << endl;
    cout << "======================= " << endl;

    double numberarray[8] = {};

    for(int i = 0 ; i < 8 ; i++)
    {
        cout << "Element of index " << i << " : " << numberarray[i] << endl;
    }

    getch();
    return 0;
}
