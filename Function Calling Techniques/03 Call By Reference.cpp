#include<conio.h>
#include<iostream>

using namespace std;

void Reference(int&);

int main()
{
    int No = 10;

    cout << "Value Before Call : " << No << endl;

    Reference(No);

    cout << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Reference(int &Ref)

{
    cout << "Inside Function...." << endl;
    Ref++;
}
