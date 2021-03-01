#include<conio.h>
#include<iostream>
using namespace std;

class Student       ///Base class
{
    public:
        int Roll_no;
        char Name[20];

        void Accept_Student_Details()           //Definition of Member Function
        {
           cout << "\n\n ============================================================" << endl;
           cout << "\n Enter a Roll number => ";
           cin >> Roll_no;
           cout<<"\n Enter a Name => ";
           cin >> Name;
        }
        void Display_Student_Details()      //Definition of Member Function
        {
           cout << "\n Roll no is : " << Roll_no;
           cout << "\n Name : " << Name;
        }

};
class Sem_1 : public Student        ///Derived class 1
{
   public:
       int m1,m2,m3;
       float total,per;

       void Accept_Sem_1_Marks()        //Definition of Member Function
       {
          Student :: Accept_Student_Details();
          cout << "\n Enter a marks => ";
          cin >> m1 >> m2 >> m3;

          total = m1 + m2 + m3;
          per = total / 3;

       }
       void Display_Sem_1_Marks()       //Definition of Member Function
       {
          Student :: Display_Student_Details();

          cout << "\n Marks of 3 subjects are : " << m1 << " " << m2 << " " << m3;

          cout << "\n Total is : " << total;
          cout << "\n Percentage is : " << per;
       }

};

class Sem_2 : public Student            ///Derived class 2
{
   public:
       int m1,m2,m3;
       float total,per;

       void Accept_Sem_2_Marks()        //Definition of Member Function
       {
          Student :: Accept_Student_Details();
          cout << "\n Enter a marks => ";
          cin >> m1 >> m2 >> m3;

          total = m1 + m2 + m3;
          per = total / 3;

       }
       void Display_Sem_2_Marks()       //Definition of Member Function
       {
          Student :: Display_Student_Details();
          cout << "\n Marks of 3 subjects are : " << m1 << " " << m2 << " " << m3;

          cout << "\n Total is : " << total;
          cout << "\n Percentage is : " << per << endl;
       }

};
//main Function
int main()
{
    Sem_1 obj1;         //object 1
    Sem_2 obj2;         //object 2

    obj1.Accept_Sem_1_Marks();
    cout << "\n^^^^^^^^^Displaying First Semester Details ^^^^^^^^^^" << endl;
    obj1.Display_Sem_1_Marks();

    getch();

    obj2.Accept_Sem_2_Marks();
    cout << "\n^^^^^^^^^Displaying Second Semester Details ^^^^^^^^^^" << endl;
    obj2.Display_Sem_2_Marks();

    getche();
    return 0;
}
