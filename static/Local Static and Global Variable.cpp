using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

static void Fun();
int gNo  = 101;             ///1st type of Static

int main()
{
    Fun();
    getch();

    cout << "\n\n Back to Main!!!! " << endl;

    Fun();
    getch();

    cout << "\n\n Back to Main!!!! " << endl;

    Fun();
    getch();

    return 0;
}

void Fun()
{
    static int Num = 51;                    /// 1st type of Static
    int No = 21;

    No++;
    Num++;

    cout << "\n Value of Local Static Variables is => " << Num;
    cout << "\n Value of Local Non Static Variables is => " << No;
    cout << "\nsize of Num = >" << sizeof(Num) << endl;
    cout << "\nSize of No = >" << sizeof(No) << endl;

    return ;
}
