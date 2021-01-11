using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class My_Friend
{
    public:
        int i;

        My_Friend()
        {
            this->i = 50;
            this->j = 10;
            this->k = 101;
            cout << endl << "Inside Default Constructor !!!!" << endl;
        }

        My_Friend(int Num,int No)
        {
            this->i = Num;
            this->k = No;
            this->j = 101;
            cout << endl << "Inside Parameterized 1 Constructor !!" << endl;
        }

        My_Friend(int No1,int No2,int No3)
        {
            this->i = No1;
            this->k = No2;
            this->j = No3;
            cout << endl << "Inside Parameterized 2 Constructor !!" << endl;
        }
        My_Friend(My_Friend &Obj)
        {
            this->i = Obj.i;
            cout << endl << "Inside Copy Constructor !!! " << endl;
        }

        ~My_Friend()
        {
            cout << endl << "Inside Destructor !!!!" << endl;
        }

        int Fun()
        {
            Gun();

            cout << endl << "Inside public Member Function Fun() !!" << endl;

            return k;
        }

        void Display()
        {
            cout << endl << "Values of characteristics " << i << " \t " << j << " \t " << k;
        }

    private:
        int j;

        void Gun()
        {
            k = (j*i) + 100;

            cout << endl << "Inside private Member Function Gun() !!" << endl;
        }

    protected:
        int k;

        void Sun()
        {
            cout << endl << "Inside protected Member Function Sun() !!" << endl;
        }


};
int main()
{
    int Res = 0 ;
    My_Friend Obj;

    cout << "Size of Object is => " << sizeof(Obj) << endl;

    Obj.i = 55;

    cout << " Fun returned => " << Obj.Fun();

    Obj.Display();

    getch();
    return 0;
}
