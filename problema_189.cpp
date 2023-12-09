/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-09 15:30:25
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-09 16:09:14
 * @ Description: NumarMunte
 */

#include <iostream>

using namespace std;

bool este_munte(int n);

int main (void)
{
    int n;

    cin >> n;

    if (n <= 0)
    {
        return 1;
    }

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (este_munte(a[i]))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;   
        }
    }
    return 0;
}

bool este_munte(int n)
{
    int u = n % 10;
    n = n / 10;
    int sens = 0; //0 pt coborare; 1 pt urcare;
    if (n % 10 < u)
    {
        return false;
    }
    while (n != 0)
    {
        int u1 = n % 10;
        n = n / 10;
        if (u1 == u)
        {
            return false;
        }
        if (u1 < u && sens == 0)
        {
            sens = 1;
            u = u1;
        }
        else if (u1 > u && sens == 1)
        {
            return false;
        }
        else 
        {
            u = u1;
        } 
    }
    if (sens == 0)
    {
        return false;
    }
    return true;
}