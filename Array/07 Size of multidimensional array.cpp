#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    string Animals[ ][3] = {{"cat","dog","rat"},{"Parrot","fox","cat"}};

    cout << sizeof(string) << endl;
    cout << sizeof(Animals) << endl;

    for(int i = 0 ; i < sizeof(Animals)/sizeof(Animals[0]) ; i++)
    {
        for(int j = 0; j < sizeof(Animals[0])/sizeof(string) ; j++)
        {
            cout << Animals[i][j] << " " << flush;
        }

        cout << endl;
    }

    getch();
    return 0;
}
