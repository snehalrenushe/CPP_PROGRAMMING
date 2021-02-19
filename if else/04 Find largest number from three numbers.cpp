#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int N1,N2,N3;

    cout << "Enter any three Numbers to find maximum from it." << endl;
    cin >> N1 >> N2 >> N3;

    if((N1 >= N2) && (N1 >= N3))
        cout << N1 << " is a maximum number." << endl;

    if((N2 >= N1) && (N2 >= N3))
        cout << N2 << " is a maximum number." << endl;

    if((N3 >= N1) && (N3 >= N2))
        cout << N3 << " is a maximum number." << endl;

    getch();
    return 0;
}
