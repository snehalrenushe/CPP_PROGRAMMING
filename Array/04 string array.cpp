#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "string Array" << endl;
    cout << "======================= " << endl;

    string ch[] = {"apple" , "banana" , "Mango"};

    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "Element of index " << i << " : " << ch[i] << endl;
    }
    getch();
    return 0;
}
