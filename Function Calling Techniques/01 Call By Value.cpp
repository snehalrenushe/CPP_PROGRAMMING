#include<conio.h>
#include<iostream>

using namespace std;

void Value(int);

int main()
{
    int No = 10;

    cout << No << endl;

    Value(No);

    cout << No << endl;

    getch();
    return 0;
}

void Value(int i)

{
    cout << "Inside Function...." << endl;
    i++;
}
