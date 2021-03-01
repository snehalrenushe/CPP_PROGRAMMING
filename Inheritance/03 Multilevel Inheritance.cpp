#include<conio.h>
#include<iostream>
using namespace std;

class Student           ///Base class
{
    public:
        int Roll_no;
        char Name[20];

        void Accept_Student_Details()       //Definition of member function
        {
           cout << "\n Enter a Roll number => ";
           cin >> Roll_no;
           cout<<"\n Enter a Name => ";
           cin >> Name;
        }
        void Display_Student_Details()      //Definition of member function
        {
           cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

           cout << "\n Roll no is : " << Roll_no;
           cout << "\n Name : " << Name;
        }

};
class Marks : public Student        ///Derived class of base class student
{
   public:
       int m1,m2,m3;

       void Accept_Marks()          //Definition of member function
       {
          Student :: Accept_Student_Details();
          cout << "\n Enter a marks => ";
          cin >> m1 >> m2 >> m3;

       }
       void Display_Marks()         //Definition of member function
       {
          Student :: Display_Student_Details();
          cout << "\n Marks of 3 subjects are : " << m1 << " " << m2 << " " << m3;

          cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
       }

};

class Result : public Marks         ///Derived class of base class Marks
{
    public:
        float total,per;

        void Display_Result()       //Definition of member function
        {
            Marks :: Accept_Marks();
            Marks :: Display_Marks();

            total = m1 + m2 + m3;

            per = total / 3;

            cout << "\n Total is : " << total;
            cout << "\n Percentage is : " << per;

            cout << "\n============================================================" << endl;
        }

};
//main function
int main()
{
    Result obj;
    obj.Display_Result();

    getch();
    return 0;
}

