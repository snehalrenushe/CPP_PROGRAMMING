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

        int Add(int No1,int No2)
        {
            int Res = 0;

            Res = No1 + No2;
            return Res;
        }
};

int main()
{
    Addition obj;

    obj.Add(100,500);
    obj.Add(15,9);

    getch();
    return 0;
}
