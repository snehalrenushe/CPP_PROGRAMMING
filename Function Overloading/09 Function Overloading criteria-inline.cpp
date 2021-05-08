///inline is not applicable

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        void first(int cNo)
        {
            cNo++;
            cout << "\n cNo as int is : " << cNo;
        }

        inline void first(int iNo)                      //can't be overloaded
        {
            cout << "\n iNo as Inline is : " << iNo;
        }
};

int main()
{
    demo obj1;
    int No = 777;

    obj1.first(No);

    getch();
    return 0;
}
