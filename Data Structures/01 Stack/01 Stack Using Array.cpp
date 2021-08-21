#include<iostream>
#include<conio.h>
using namespace std;
#define max 4

class Demo
{
    public:
        Demo()
        {
            Top=-1;
        }

        int Top,Stack[max];
        void push(int item);
        int Is_Stack_Full();
        void pop();
        int Is_Stack_Empty();
};

void Demo :: push(int N)
{
    if(Is_Stack_Full())
    {
        cout << "\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout << "\n\nStack is full!!!Can't add new Values...\n";
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    }
    else
    {
        Top = Top+1;
        Stack[Top] = N;
        cout << "\n\n Pushed element is : " << N;
    }
}

int Demo :: Is_Stack_Full()
{
    if(Top == max - 1)
    {
        return 1;
    }

    return 0;
}

void Demo :: pop()
{
    int item;
    if(Is_Stack_Empty())
    {
        cout << "\n\nStack is now Empty!!can't Delete any Values...";
    }
    else
    {
        cout << "\n\nDeleted value from Stack is = " << Stack[Top];
        Stack[Top] = 0;
        Top = Top-1;
    }
}

int Demo :: Is_Stack_Empty()
{
    if(Top == -1)
    {
        return 1;
    }

    return 0;
}

int main()
{
    system("cls");
    Demo d;
    d.push(10);
    d.push(20);
    d.push(30);
    d.push(40);
    getch();
    d.push(50);
    getch();
    d.pop();
    d.pop();
    d.pop();
    d.pop();

    getch();
    return 0;
}
