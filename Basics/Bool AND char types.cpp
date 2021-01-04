#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    bool tvalue = true;
    cout << tvalue << endl;

    bool fvalue = false;
    cout << fvalue << endl;

    bool bvalue = 43;
    cout << bvalue << endl;

    char cvalue = 77;
    cout << (cvalue) << endl;

    char avalue = 456;
    cout << char(avalue) << endl;

    char value = 'i';
    cout << char(value) << endl;

    char a = 'i';
    cout << a << endl;

    wchar_t abc = 's';
    cout << char(abc) << endl;

    cout << "Size of Bool : " << sizeof(bool) << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of wide char type : " << sizeof(wchar_t) << endl;

    getch();
    return 0;

}
