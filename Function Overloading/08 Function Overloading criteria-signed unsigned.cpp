///signed unsigned is applicable

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

        void first(unsigned int iNo)
        {
            cout << "\n iNo as unsigned integer is : " << iNo;
        }
};

int main()
{
    demo obj1;
    short int No = 777;

    obj1.first(-555);
    obj1.first(No);

    getch();
    return 0;
}
