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

        void Add(float No1,float No2)
        {
            cout << "\n Addition is : " << No1 + No2;
        }
};

int main()
{
    Addition obj;

    obj.Add(100,500);
    obj.Add(15.5f,7.2f);

    getch();
    return 0;
}
