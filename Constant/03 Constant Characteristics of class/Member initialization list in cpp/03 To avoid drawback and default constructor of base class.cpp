using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class demo
{
    public:
        int i,j;

        demo()
        {
            i = 11 , j = 21;
        }

        void fun(int x)
        {
            int y = 11;
            x++;
            y++;
            i++;
            j++;
        }

        void gun(int x) const
        {
            int y = 11;
            x++;
            y++;
            i++;
            j++;
        }

};

int main()
{
    demo obj;
    obj.fun();
    obj.gun();
}
