
///--------------------*****^^^^^^^^^*******^^^^^^^^^***** INFORMATION ABOUT PROJECT DETAILS ********^^^^^^^********^^^^^^^^^^*******---------------------
/*
                1] If only one student has done these project then you accept and display only Roll no,Name and Project Name.
                2] If two students have done these project then you accept and display Roll no and name of first student,Roll no and name of second student and project name.
                3] Using these Application Only Techer can Search,Update and Count no of projects entered.
                4] Teacher who wants to Use these Application you must first Login with the Correct Password and UserName.
                5] Students can only Accept and display details.

*/
///*********************************************************************************************************************************************************

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

#define Count 2

using namespace std;

class Project
{
    private:
            int H_Cnt = 0;          // Holder_Count
            int P_ID = 0;            // Project_ID
            int Roll_No1 = 0;          // Roll no of first Student
            char H_Name1[15];         // Holder Name of first student
            int Roll_No2 = 0;         // Roll no of second student
            char H_Name2[15];          // Holder Name of second student
            char Project_Name[30];     // Project Name
            static int P_Cnt;             // Declaration of Static Variable

    public:
            Project();             // Default Constructor

            Project(int,char[],int,char[],char[]);         // Parameterized Constructor

            ~Project();                             // Destructor

            int login();                         // Member function for login form
            void Accept_Project_Details();        // Member function for accepting details
            void Display_Project_Details();       // Member Function for Displaying details
            int Count_Of_Projects();               // Member Function for Counting no of projects
            friend void Search_Project_By_ID(int);   // Friend Function for Searching project using ID
            friend void Display_Project_By_ID(int);  // Friend Function for Displaying project using ID
            void Update_Project_Details();           // Member Function for Updating project details
            friend int Update_Project(int);         // Friend Function for updating details


}Obj[Count];

int Project::P_Cnt = 0;                        // Definition of Static Variable  ( STATIC CHARACTERISTICS OF CLASS)

int Project :: login()                    // Definition of login member function
{
    cout << " \n\t Press Any Key To Open Login Form !!!" << endl;

    getche();

    system("cls");
    char UserName[30] = " ";
	char Password[30] = " ";

	cout << "\n\t\t ************ WELCOME ************ " << endl;
	cout << "\n\t\t ********** LOGIN PAGE *********** " << endl;

	cout << "\n ( NOTE : please Enter Valid Password and Username to get Information You Want ) " << endl;

	while(1)             // Unconditional loop
        {
            cout << " \n  \t Enter Valid Username => " ;
            cin >> UserName;

            if(strcmp(UserName,"snehal") == 0)          // for Comparison
            {
                while(1)
                {
                    cout << " \n  \t Enter Valid Password => ";
                    cin >> Password;
                    if (strcmp(Password, "1510snehal") == 0)
                    {
                        cout << "\n   ############# LOGIN SUCCESSFUL !!!! #############" << endl;
                        cout << "\n==============================================================";
                        return 0;
                    }
                    cout << " \n --------------------------------------------------------------- " << endl;

                    cout << " \n These Password is does not Exist....Please Enter Valid Password " << endl;

                    cout << " \n ------------------------------------------------------------ " << endl;
                }
            }
            cout << " \n --------------------------------------------------------------- " << endl;

            cout << " \n These Username is does not Exist ...Please Enter Valid Username " << endl;

            cout << " \n --------------------------------------------------------------- " << endl;
        }

	return 0;
}


Project::Project()         // Definition of default constructor
{
    this -> P_ID = ++P_Cnt;
    this -> Roll_No1 = 0;
    strcpy(this -> H_Name1," ");
    this -> Roll_No2 = 0;
    strcpy(this -> H_Name2," ");
    strcpy(this -> Project_Name," ");

    cout << "\n Project of ID " << this -> P_ID << " Created Successfully Default Constructor !!!!! " << endl;

    cout << "\n====================================================================================" << endl;

    system("cls");
}

Project::Project(int R_No1,char Name1[],int R_No2,char Name2[],char P_Name[])       // Definition of Parameterized Constructor
{
    this -> P_ID = ++P_Cnt;
    this -> Roll_No1 = R_No1;
    strcpy(this -> H_Name1,Name1);
    this -> Roll_No2 = R_No2;
    strcpy(this -> H_Name2,Name2);
    strcpy(this -> Project_Name,P_Name);

    cout << "\n Project of ID " << this -> P_ID << " Created Successfully Parameterised Constructor !!!!! " << endl;

    cout << "\n====================================================================================" << endl;

    getch();
}

Project::~Project()       // definition of destructor
{
    cout << "\n Project of ID " << this -> P_ID << " Destroyed Successfully Destructor !!!!! " << endl;

    cout << "\n====================================================================================" << endl;
}

void Project :: Accept_Project_Details()       // Definition of Accepting Project Details
{
    system("cls");

    UP:
    cout << "\n\n How Many Students does this Project have ? :  " ;
    cin >> this -> H_Cnt;

    if(H_Cnt < 1 || H_Cnt > 2  )
    {
        cout << "\n Please Enter valid Holder Count .... " << endl;
        goto UP;
    }

    system("cls");

    cout << " \n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;

    if(H_Cnt == 2)
    {
        fflush(stdin);
        cout << " \n Enter " << this -> P_ID  << " Project Details "<< endl;
        cout << " \n Enter Roll No of First Student = ";
        cin >> this -> Roll_No1;
        cout << " \n Enter Name of First Student = " ;
        cin >> this -> H_Name1;
        cout << " \n Enter Roll No of Second Student = " ;
        cin >> this -> Roll_No2;
        cout << " \n Enter Name of Second Student = " ;
        cin >> this -> H_Name2;
        fflush(stdin);
        cout << " \n Enter project Name => " ;
        //cin >> this -> Project_Name;
        cin.getline(this->Project_Name,sizeof(Project_Name));
        while ((getchar()) != '\n');
        //fflush(stdin);

    }
    else
    {
        fflush(stdin);
        cout << " \n Enter " << this -> P_ID  << " Project Details "<< endl;
        cout << " \n Enter Roll No of Student = ";
        cin >> this -> Roll_No1;
        cout << " \n Enter Name of Student = " ;
        cin >> this -> H_Name1;
        fflush(stdin);
        cout << " \n Enter project Name = " ;
        //cin >> this -> Project_Name;
        cin.getline(this->Project_Name,sizeof(Project_Name));
        while ((getchar()) != '\n');
        //fflush(stdin);

    }
    cout << "\n================================================================" << endl;

    system("cls");
}

void Project :: Display_Project_Details()       // Definition of Display project details
{
    if(H_Cnt == 2)
    {
        cout << " \n ************ Displaying Project " << this -> P_ID << " Details ************ " << endl;
        cout << " \n Enter Project Details of ID " << this -> P_ID << endl;
        cout << " \n Roll No Of first Student = " << this -> Roll_No1 << endl;
        cout << " \n Name of First Student = " << this -> H_Name1 << endl;
        cout << " \n Roll No Of Second Student = " << this -> Roll_No2 << endl;
        cout << " \n Name of Second Student = " << this ->H_Name2 << endl;
        cout << " \n project Name => " << this -> Project_Name << endl;
    }
    else
    {
        cout << " \n *************** Displaying Project " << this -> P_ID << " Details *************** " << endl;
        cout << " \n THESE PROJECT HAVE ONLY ONE HOLDER....." << endl;
        cout << " \n Enter Project Details of ID " << this -> P_ID << endl;
        cout << " \n Roll No Of student = " << this -> Roll_No1 << endl;
        cout << " \n Name of Student = " << this -> H_Name1 << endl;
        cout << " \n project Name => " << this -> Project_Name << endl;
    }



    cout << "\n====================================================================================" << endl;
}

int Project :: Count_Of_Projects()          // Definition of Count of project
{
    cout << "\n Count No of Projects Added =>" << this -> P_Cnt << endl;

    cout << "\n======================================================" << endl;
}

void Search_Project_By_ID(int ID)            // Naked Function Becomes Friend of Our Class
{
    if(ID > Project :: P_Cnt)
    {
        cout << " \n -------------------------------------" << endl;

        cout << " \n There is No Project with these ID ..." << ID << endl;

        cout << " \n -------------------------------------" << endl;
    }
    else
    {
        cout << " \n ************************************************************ " << endl;

        cout << " \n Information Of Searched Project With Given ID is as follows => " << endl;

        Obj[ID-1].Display_Project_Details();
    }
}

void Display_Project_By_ID(int ID)          // Naked Function Becomes Friend of Our Class
{
    if(ID > Project :: P_Cnt)
    {
        cout << "\n There is No Project with these ID ..." << ID << endl;
    }
    else
    {
        cout << " \n ************************************************************ " << endl;

        cout << " \n Information Of Project With Given ID is as follows => " << endl;

        Obj[ID-1].Display_Project_Details();
    }
}

void Project :: Update_Project_Details()   // Definition of update project details
{
    if(H_Cnt == 1)
    {
        int Choice = 0;

        cout << "\n We are Updating Details of Project With ID =>" << this -> P_ID;

        UP:

        cout << "\n ===============================********===================================="<< endl;

        cout << " What do you Want to Update ?? " << endl;
        cout << " \n\t -1. ROLL NO OF STUDENT  \n\t -2. NAME OF STUDENT  \n\t -3. PROJECT NAME  \n\t -4. EXIT "  << endl;

        cout << "\n ===============================********===================================="<< endl;
        cout << "\n Enter Choice = " << endl;

        cin >> Choice;

        switch(Choice)
        {
            case 1:
                cout << "\n Enter New Roll No of Student = " << this -> Roll_No1 << " => " ;
                cin >> this -> Roll_No1;
                goto UP;

            case 2:
                cout << "\n Enter New Name of student = " << this -> H_Name1 << " => " ;
                cin >> this -> H_Name1;
                goto UP;

            case 3:
                fflush(stdin);
                cout << "\n Enter New Project Name = " << this -> Project_Name << " => ";
                //cin >> this -> Project_Name;
                cin.getline(this->Project_Name,sizeof(Project_Name));
                while ((getchar()) != '\n');
                goto UP;

            case 4:
                goto Down;

        default:
            cout << "\n Invalid Choice !!!!!!" << endl;
            goto UP;
      }
    }
    else if(H_Cnt == 2)
    {
        int Choice = 0;

        cout << "\n We are Updating Details of Project With ID =>" << this -> P_ID;

        Up:

        cout << "\n ===============================********===================================="<< endl;

        cout << " What do you Want to Update ?? " << endl;
        cout << " \n\t -1. ROLL NO OF FIRST STUDENT  \n\t -2. NAME OF FIRST STUDENT  \n\t -3. ROLL NO OF SECOND STUDENT  \n\t -4. NAME OF SECOND STUDENT \n\t -5. PROJECT NAME  \n\t -6. EXIT "  << endl;

        cout << "\n ===============================********===================================="<< endl;
        cout << "\n Enter Choice = " << endl;

        cin >> Choice;

        switch(Choice)
        {
            case 1:
                cout << "\n Enter New Roll No for First Student = " << this -> Roll_No1 << " => " ;
                cin >> this -> Roll_No1;
                goto Up;

            case 2:
                cout << "\n Enter New Name of first student = " << this -> H_Name1 << " => " ;
                cin >> this -> H_Name1;
                goto Up;

            case 3:
                cout << "\n Enter New Roll No for Second Student = " << this -> Roll_No2 << " => ";
                cin >> this -> Roll_No2;
                goto Up;

            case 4:
                cout << "\n Enter New Name for Second Student = " << this -> H_Name2 << " => ";
                cin >> this -> H_Name2;
                goto Up;

            case 5:
                fflush(stdin);
                cout << "\n Enter New Project Name = " << this -> Project_Name << " => ";
                //cin >> this -> Project_Name;
                cin.getline(this->Project_Name,sizeof(Project_Name));
                while ((getchar()) != '\n');
                goto Up;

            case 6:
                goto Down;

        default:
            cout << "\n Invalid Choice !!!!!!" << endl;
            goto Up;
      }
    }

    Down:

        cout <<"\n Details are Update Successfully... " << endl;
        cout << "\n Press any key to go back !!!! " << endl;

}

int Update_Project(int ID)                  // Naked Function Becomes Friend of Our Class
{
    if(ID > Project :: P_Cnt)
    {
        cout << " \n ------------------------------------------------------" << endl;

        cout << "\n There is No Project Available with given entered ID ..." << ID;

        cout << " \n ------------------------------------------------------" << endl;
    }
    else
    {
        Obj[ID-1].Update_Project_Details();
    }
}


int main()
{
    int i = 0 , Choice = 0 , ID = 0;
    char ch = '\0';
    int j = 0,m = 0,x=0;

    UP:
        system("cls");
    cout << " \n\t -1. FOR STUDENT  \n\t -2. FOR TEACHER \n\t -3. LOG OUT "<< endl;

    cout << " \n\t PLEASE ENTER YOUR CHOICE => ";
    cin >> x;

    if(x < 1 || x > 3)
    {
         cout << " \n Please Enter Valid Option ....." << endl;

         cin >> x;

         cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

         goto UP;

    }
    else if(x == 1)
    {
        system("cls");
                Up:
                {
                    cout << " \n\t -1. ACCEPT PROJECT DETAILS \n\t -2. DISPLAY PROJECT DETAILS  \n\t -3. EXIT " << endl;

                    cout << " \n\t PLEASE ENTER YOUR CHOICE => ";
                    cin >> m;

                    if(m < 1 || m > 3)
                    {
                        cout << " \n Please Enter Valid Option ....." << endl;

                        cin >> m;

                        cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

                        goto Up;

                    }

                    else if(m == 1)
                    {
                        for(i = 0 ; i < 2 ; i++)
                        {
                            Obj[i].Accept_Project_Details();
                        }
                        goto Up;
                    }

                    else if(m == 2)
                    {
                        for(i = 0 ; i < 2 ; i++)
                        {
                            Obj[i].Display_Project_Details();
                        }

                        cout << " Press any key go back ...." << endl;
                        getch();

                        goto Up;
                    }

                    else if(m == 3)
                    {
                        goto UP;
                    }
                }
            }

    else if(x == 2)
    {
            uP:

            system("cls");
            cout << "\n\t -1. LOGIN \n\t -2. EXISTING PROJECT DETAILS  \n\t -3. EXIT " << endl;

            cout << "\n \t PLEASE ENTER YOUR CHOICE => ";
            cin >> j;

            if(j < 1 || j > 3)
            {
                cout << " \n Please Enter Valid Option ..." ;

                cin >> j;

                cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;

                goto uP;
            }

            else if(j == 1)
            {
                system("cls");
                Obj[i].login();
                    while(1)         // unconditional loop
                    {
                            fflush(stdin);

                            cout << "\n\t -1. SEARCH PROJECT BY ID  \n\t -2. UPDATE PROJECT BY ID  \n\t -3. DISPLAY PROJECT BY ID   \n\t -4. EXIT " << endl;

                            cout << "\n Please Enter Valid Option " << endl;

                            cin >> Choice;

                            cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;

                            switch(Choice)
                           {

                            case 1:
                                   cout << "\n Enter Project ID To Search = ";
                                   cin >> ID;

                                   Search_Project_By_ID(ID);

                                   cout << "\n Press any key to go back to main Menu : ";

                                   getch();

                                   system("cls");

                                   break;

                            case 2:
                                   cout << "\n Enter Project ID To Update Details = ";
                                   cin >> ID;

                                   Update_Project(ID);

                                   cout << "\n Press any key to go back to main Menu : ";

                                   getch();

                                   system("cls");

                                   break;

                            case 3:
                                  cout << "\n Enter Product ID Which Details should be display = ";
                                  cin >> ID;

                                  Display_Project_By_ID(ID);

                                  cout << "\n Press any key to go back to main Menu : ";

                                  getch();

                                  system("cls");

                                  break;

                            case 4:
                                  fflush(stdin);
                                  cout << "\n Are you Sure ??? \n if u really wants to go back enter any key " ;
                                  getch();

                            default:

                                  cout << "\n Invalid Choice !!!! Please Select Your Choice Properly !!! " << endl;
                                  cout << "\n Press Any Key To go back .... :" ;
                         }

                         if(Choice == 4)
                         {
                             goto uP;
                             cout << "\n Thanks for using Our Application !!!" << endl;
                             break;
                         }
                  }

            }

            else if(j == 2)
            {
                    system("cls");

                    int k;

                    up:

                    cout << " \n\t -1. COUNT OF PROJECTS \n\t -2. Add New Student \n\t -3. EXIT " << endl;

                    cout << "\n \t PLEASE ENTER YOUR CHOICE => ";
                    cin >> k;

                    cout << "\n======================================================" << endl;

                    if(k == 1)
                    {
                        system("cls");

                        Obj[i].Count_Of_Projects();

                        goto up;
                    }

                    else if(k == 2)
                    {
                        Obj[i].Accept_Project_Details();
                        goto up;
                    }

                    else if(k == 3)
                    {
                        goto uP;

                    }

            }

            else if(j == 3)
            {
                goto UP;
                return 0;
            }
    }
    else if(x == 3)
    {
        goto Down;
        return 0;
    }

    Down:

    cout << " \n ^^^^^^^^^^^^^^ Thanks For Using These Application !!! ^^^^^^^^^^^^^" << endl;

    getch();
    return 0;

 }


