#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Cnt[2][2][3];

    int i = 0 , j = 0 , k = 0;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            for(k = 0 ; k < 3 ; k++)
            {
                cout << "\nEnter Value for Cnt[%d][%d][%d] = > ";
                cin >> Cnt[i][j][k];
            }
        }
    }

    cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

    cout << "\n Two Dimensional Array Element are : " << endl;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            for(k = 0 ; k < 3 ; k++)
            {
                cout << "\t\t" <<Cnt[i][j][k] << endl;
            }
        }
    }

    cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

    return 0;

}


