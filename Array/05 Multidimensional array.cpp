#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    string Animals[ ][3] = {{"cat","dog","rat"},{"Parrot","fox","cat"}};

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << Animals[i][j] << "  " << flush;
        }

        cout << endl;
    }
    getch();
    return 0;
}
