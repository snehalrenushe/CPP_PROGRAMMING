#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 10;
    int &Ref = i;
    //int &temp;                  /// It will give error because these variable is declared but not initialized..
    int &temp = i;
    int &temp1 = temp;
    int &temp2 = temp1;           /// We can create multiple references which are going to refer single variable

    int No = 100;
    int *N1 = &No;                /// We can create Reference to Reference variable in cpp
    int *N2 = N1;
    int *N3 = N2;

    //int* (&Num) = *No;

    int Arr[5] = {1,2,3,4,5};
    int [5](&ARef) = Arr;
    //int (&ARef)

    temp2++;
    Ref++;
    i++;
    temp++;

    cout << "Ref : " << Ref << " And " << " i : " << i << endl;
    cout << "New variable is : " << temp << endl;
    cout << "Value is : " << temp1 << endl;
    cout << "Value is : " << temp2 << endl;

    cout << "\n**************************************************\n";

    cout << "\n values are : " << endl;

    cout << *N1 << endl;            //100
    cout << No << endl;             //100
    cout << *N2 << endl;            //100
    cout << *N3 << endl;            //100

//  cout << "Value of Num variable is : " << *Num << endl;

    cout << "Value of Array variable is : " << Arr[2];

    getch();
    return 0;

}
