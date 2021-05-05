#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Addition
{
    public:
        void Add(int No1,int No2)
        {
            cout << "\n Addition is : " << No1 + No2;
        }

        void Add(int No1,int No2,int No3)
        {
            cout << "\n Addition is : " << No1 + No2 + No3;
        }
};

int main()
{
    Addition obj;

    obj.Add(100,500);
    obj.Add(15,9,20);

    getch();
    return 0;
}
