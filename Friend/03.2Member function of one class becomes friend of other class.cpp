using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Market;
class Mall;

class Mall
{
   public:
           int pub;

           Mall()
           {
               this -> pub = 500;
               this -> pri = 600;
               this -> pro = 800;

               cout << endl << " Inside Default Constructor...." << endl;
           }

           Mall(int Num,int No)
           {
               this -> pub = Num;
               this -> pri = No;
               this -> pro = 550;

               cout << endl << " Inside parameterized Constructor......" << endl;
           }

           Mall(int No1,int No2,int No3)
           {
               this -> pub = No1;
               this -> pri = No2;
               this -> pro = No3;

               cout << endl << " Inside parameterized Constructor......" << endl;
           }

           Mall(Mall &Obj)
           {
               this -> pub = Obj.pub;
               this -> pri = Obj.pri;
               this -> pro = Obj.pro;

               cout << endl << " Inside Copy Constructor...." << endl;
           }

           ~Mall()
           {
               cout << endl << " Inside Destructor of Infosys class...." << endl;
           }

           int Final_Bill()
           {
               Calculate_Bill();

               cout << endl << " Inside Public Member Function Final_Bill().." << endl;

               return pro;
           }

           void Display_Bill();

   private:
           int pri;

           void Calculate_Bill()
           {
               Bill_Desk();

               cout << endl << " Inside Private Member function Calculate_Bill()..." << endl;
           }

   protected:
           int pro;

           void Bill_Desk()
           {
               pro = (pri * 2) + pub;

               cout << endl << " Inside Protected Member Function Bill_Desk()..." << endl;
           }

};

class Market
{
    friend void Mall :: Display_Bill();

    public:
           int i;

           Market()
           {
               this -> i = 111;
               this -> j = 42;
               this -> k = 45;

               cout << endl << " Inside Default Constructor of My_Friend classs...." << endl;
           }

           Market(int Num,int No)
           {
               this -> i = Num;
               this -> k = No;
               this -> j = 145;

               cout << endl << " Inside parameterized Constructor......" << endl;
           }

           Market(int No1,int No2,int No3)
           {
               this -> i = No1;
               this -> k = No2;
               this -> j = No3;

               cout << endl << " Inside parameterized Constructor......" << endl;
           }

           Market(Market &Obj)
           {
               this -> i = Obj.i;

               cout << endl << " Inside Copy Constructor...." << endl;
           }

           ~Market()
           {
               cout << endl << " Inside Destructor of Infosys class...." << endl;
           }

           int Fun()
           {
               Gun();

               cout << endl << " inside Public Member Function Fun()..." << endl;

               return k;
           }

           void Display()
           {
               cout << endl << " In Display of My friend values of characteristics " << i << "\t" << j << "\t" << k ;
           }

    private:
           int j;

           void Gun()
           {
               k = ( j * i ) + 45;

               cout << endl << " Inside Private Member Function gun()..." << endl;
           }

    protected:
           int k;

           void Sun()
           {
               cout << endl << " Inside Protected Member function Sun().." << endl;
           }

};

void Mall::Display_Bill()
{
    cout << endl << " Values of Characteristics in Display Infosys " << pub << "\t" << pri << "\t" << pro << endl;

    Market Mk;

    Mk.j = 88;

    Mk.Gun();

    getche();

    Mk.Display();

    cout << endl << " Bye Bye " << endl << " Press Any Key To Go Back " << endl;

    getch();
}

int main()
{
    Mall M;

    M.Display_Bill();

    cout << endl << " BACK TO MAIN()!!! " << endl;

    getch();
    return 0;
}
