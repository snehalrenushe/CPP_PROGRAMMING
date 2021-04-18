#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

inline int Add(int N1,int N2)
{
    int Temp = 0;

    Temp = N1 + N2;

    return Temp;
}

int main()
{
    int No1 = 0 , No2 = 0 , sum = 0;

    cout << "\n Enter a first Number : ";
    cin >> No1;

    cout << "\n Enter a second Number : ";
    cin >> No2;

    sum = Add(No1,No2);

    cout << "\n Addition of " << No1 << " And " << No2 << " is " << sum << "." << endl;

    getch();
    return 0;
}
