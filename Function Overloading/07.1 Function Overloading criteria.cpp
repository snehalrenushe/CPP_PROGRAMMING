///constant argument is not applicable

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        void first(char cNo)
        {
            cNo++;
            cout << "\n cNo as char is : " << cNo;
        }

        void first(const int iNo)              // Not Allowed as data qualifier is not considered as overloading Criteria
        {
            //iNo++;      // Not allowed
            cout << "\n iNo as integer is : " << iNo;
        }
};

int main()
{
    demo obj1;

    obj1.first('B');
    obj1.first(15);

    getch();
    return 0;
}
