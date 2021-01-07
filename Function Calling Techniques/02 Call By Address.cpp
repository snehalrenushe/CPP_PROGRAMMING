#include<conio.h>
#include<iostream>

using namespace std;

void Address(int*);

int main()
{
    int No = 10;

    cout << No << endl;

    Address(&No);

    cout << No << endl;

    getch();
    return 0;
}

void Address(int *i)

{
    cout << "Inside Function...." << endl;
    (*i)++;
}
