#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "Array of double numbers " << endl;
    cout << "======================= " << endl;

    double numbers [4] = {1.4 , 6.3 , 4.5 , 3.4};

    for(int i = 0 ; i < 4 ; i++)
    {
        cout << "Element of index " << i << " : " << numbers[i] << endl;
    }
    getch();
    return 0;
}
