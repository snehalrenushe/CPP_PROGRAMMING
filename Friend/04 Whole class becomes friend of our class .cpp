using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class hello
{
    public:
        void fun();
        void sun();
};

class demo
{
    public:
        int pub;
        demo()
        {
            pub = 10;
            pri = 20;
            pro = 30;
        }

    private:
        int pri;

    protected:
        int pro;

    friend class hello;

};
void hello :: fun()
{
    demo obj;
    cout << obj.pub << " \t " << obj.pri << " \t " << obj.pro << endl;
}

void hello :: sun()
{
    demo obj;
    cout << obj.pub << " \t " << obj.pri << " \t " << obj.pro << endl;
}

int main()
{
    hello hobj;
    hobj.fun();
    hobj.sun();

    return 0;
}
