#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int No1 = 0;

    cout << "Enter any number to check it is even or odd : " << flush;
    cin >> No1;

    if(No1 % 2 == 0)
    {
        cout << No1 << " is Even number " << endl;
    }

    if(No1 % 2 != 0)
    {
        cout << No1 << " is Odd number. " << endl;
    }

    getch();
    return 0;
}
