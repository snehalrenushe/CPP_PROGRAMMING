using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class demo
{
    public:
        int i;
        int &ref;

        demo(int x) : ref(x)
        {
            ref++;
            i = 11;
            cout << " Inside Constructor....." << endl;
        }

};

int main()
{
    int a = 101;
    demo obj(a);

    cout << obj.i  << endl << obj.ref << endl;
    cout << a << endl;

    getch();
    return 0;
}
