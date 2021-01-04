#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    float fvalue = 76.3242;
    cout << fvalue << endl;

    cout << scientific << fvalue << endl;

    cout << fixed << fvalue << endl;

    cout << setprecision(20) << fvalue << endl;

    double  dvalue = 76.3242;
    cout << setprecision(20) << dvalue << endl;

    long double lvalue = 76.893750398575;
    cout << setprecision(10) << lvalue << endl;

    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long : " << sizeof(long double) << endl;

    getch();
    return 0;

}
