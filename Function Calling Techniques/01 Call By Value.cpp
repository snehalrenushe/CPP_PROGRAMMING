#include<conio.h>
#include<iostream>

using namespace std;

void Value(int);

int main()
{
    int No = 10;

    cout << "Value Before Call : " << No << endl;

    Value(No);

    cout << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Value(int i)

{
    cout << "Inside Function...." << endl;
    i++;
}
