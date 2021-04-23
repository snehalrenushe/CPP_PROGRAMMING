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

        void fun(int x)    //Non-constant member function
        {
            int y = 11;
            x++;
            y++;
            i++;
            j++;
        }

        void gun(int x) const       //Constant Member function
        {
            int y = 11;
            x++;
            y++;
            //i++;
            //j++;
        }

};

int main()
{
    int i,j;
    demo obj;
    obj.fun(i);
    cout << "value of " << obj.j << endl;
    obj.gun(j);
}
