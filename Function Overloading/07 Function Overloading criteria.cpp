///constant behavior is applicable

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        void first(char cNo)
        {
            cout << "\n cNo as char is : " << cNo;
        }

        void first(int iNo) const
        {
            cout << "\n iNo as integer is : " << iNo;
        }
};

int main()
{
    demo obj1;
    const demo obj2;

    obj1.first('S');
    obj2.first(15);

    getch();
    return 0;
}
