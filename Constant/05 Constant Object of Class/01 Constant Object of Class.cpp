using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class demo
{
    int i,j;

    public:
        demo(int x = 0)
        {
            cout << "Inside Default Constructor.." << endl;
            i = x;
        }

        int fun() const
        {
            return i;
        }
        int sun()
        {
            return i;
        }

};

int main()
{
    const demo obj(77);
    demo obj1(98);

    cout << "Value is : " << obj1.fun() << endl;
    /// cout << "Value is : " << obj.sun() << endl; //error

}
