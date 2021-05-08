/// Reference is AMBIGIOUS and declaration is Allowed

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        void first(int iNo)
        {
            cout << "\n iNo as int is : " << iNo;
        }

        void first(int &iNum)
        {
            cout << "\n iNum as int is : " << iNum;
        }
};

int main()
{
    demo obj;

    cout << sizeof(obj);

    int i = 5;
    int &i_ref = i;

    obj.first(555);
    obj.first(i_ref);
    obj.first(i);

    getch();
    return 0;
}
