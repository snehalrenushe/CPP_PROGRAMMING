#include<conio.h>
#include<iostream>

using namespace std;

void Reference(int&);

int main()
{
    int No = 10;

    cout << No << endl;

    Reference(No);

    cout << No << endl;

    getch();
    return 0;
}

void Reference(int &Ref)

{
    cout << "Inside Function...." << endl;
    Ref++;
}
