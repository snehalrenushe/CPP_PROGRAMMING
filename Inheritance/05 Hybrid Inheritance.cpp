#include<conio.h>
#include<iostream>

using namespace std;

class Student
{
    public:
        int Roll_no;
        char Name[20];

        void Accept_Student_Details()
        {
           cout << "\n Enter a Roll number => ";
           cin >> Roll_no;
           cout<<"\n Enter a Name => ";
           cin >> Name;
        }
        void Display_Student_Details()
        {
           cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

           cout << "\n Roll no is : " << Roll_no;
           cout << "\n Name : " << Name;
        }

};
class Marks : public Student
{
   public:
       int m1,m2,m3;

       void Accept_Marks()
       {
          Student :: Accept_Student_Details();
          cout << "\n Enter a marks => ";
          cin >> m1 >> m2 >> m3;

       }
       void Display_Marks()
       {
          Student :: Display_Student_Details();
          cout << "\n Marks of 3 subjects are : " << m1 << " " << m2 << " " << m3;
       }

};

class Extra
{
   public:
       int m4;

       void Accept_Extra_Marks()
       {
          cout << "\n Extra marks is => ";
          cin >> m4;
       }
       void Display_Extra_Marks()
       {
          cout << "\n Extra marks is : " << m4 << endl;
       }
};

class Result : public Marks,public Extra
{
   public:
       int total;
       float per;

       void Accept_Result()
       {
           Marks :: Accept_Marks();
           Extra :: Accept_Extra_Marks();
           total = m1+m2+m3+m4;
           per = total/4;
       }
       void Display_Result()
       {
          Marks :: Display_Marks();
          Extra :: Display_Extra_Marks();

          cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

          cout<<"\n Total marks are : " << total;
          cout<<"\n Percentage are : "<< per;

          cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
       }
};

int main()
{
    Result obj;

    obj.Accept_Result();
    obj.Display_Result();

    getch();
    return 0;
}
