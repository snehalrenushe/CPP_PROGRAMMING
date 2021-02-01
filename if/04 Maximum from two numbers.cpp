#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int No1 , No2;

    cout << "Enter two numbers to check which number is maximum : " << endl;
    cin >> No1 >> No2 ;

    if(No1 > No2)
    {
        cout << No1 << " is maximum number....." << endl;
    }

    if(No2 > No1)
    {
        cout << No2 << " is maximum number....." << endl;
    }

    getch();
    return 0;
}
