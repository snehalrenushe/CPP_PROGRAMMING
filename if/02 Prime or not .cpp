#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int No1 = 0;

    cout << "Enter any number to check it is prime or not : " << flush;
    cin >> No1;

    if(No1 % 2 == 1)
    {
        cout << No1 << " is prime number " << endl;
    }

    if(No1 % 2 ==0)
    {
        cout << No1 << " is not prime number. " << endl;
    }

    getch();
    return 0;
}
