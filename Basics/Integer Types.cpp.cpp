#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    int value = -345645;
    cout << value << endl;

    cout << "Max int value " << INT_MAX << endl;
    cout << "Min int value " << INT_MIN << endl;

    long int lvalue = 234158927943;
    cout << lvalue << endl;

    short int svalue = 2342;
    cout << svalue << endl;

    unsigned int uvalue = 2342729;
    cout << uvalue << endl;

    cout << "Size of integer values : " << sizeof(int) << endl;
    cout << "Size of long integer values : " << sizeof(long int) << endl;
    cout << "Size of short integer values : " << sizeof(short int) << endl;
    cout << "Size of unsigned integer values : " << sizeof(unsigned int) << endl;
    cout << "Size of signed integer values : " << sizeof(signed int) << endl;

    signed int sivalue = -2453;
    cout << sivalue << endl;

    getch();
    return 0;

}
