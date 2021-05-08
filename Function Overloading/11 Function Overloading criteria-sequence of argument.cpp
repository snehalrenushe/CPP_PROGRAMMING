/// Sequence of arguments / parameters is applicable

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
    public:
        void first(int cNo,float iNum)
        {
            cout << "\n cNo as int is : " << cNo;
            cout << "\n Num as float is : " << iNum;
        }

        void first(float cNo,int iNum)
        {
            cout << "\n cNo as float is : " << cNo;
            cout << "\n iNum as int is : " << iNum;
        }
};

int main()
{
    demo obj;

    obj.first(55,66.7);
    obj.first(45.66,77);

    getch();
    return 0;
}
