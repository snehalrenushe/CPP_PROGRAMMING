///Access specifier Based : We can't overload function by changing its access specifier bcoz at the time of function call access specifier is not considered.

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

    private:
        void first(int iNo)
        {
            cout << "\n iNo as integer is : " << iNo;
        }
};

int main()
{
    demo obj;

    obj.first('S');
    obj.first(15);

    getch();
    return 0;
}
