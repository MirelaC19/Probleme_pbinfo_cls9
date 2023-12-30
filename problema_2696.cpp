/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:02:57
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:12:44
 * @ Description: https://www.pbinfo.ro/probleme/2696/cifp-cifi
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, pa = 0, pb = 0, ia = 0, ib = 0;

    cin >> a >> b;

    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
    {
        while (a != 0)
        {
            if (a % 10 % 2 == 0)
            {
                pa++;
            }
        }
        while (b != 0)
        {
            if (b % 10 % 2 == 0)
            {
                pb++;
            }
        }
        cout << pa + pb << endl; 
        return 0;
    }
    else
    {
        while (a != 0)
        {
            if (a % 10 % 2 != 0)
            {
                ia++;
            }
        }
        while (b != 0)
        {
            if (b % 10 % 2 != 0)
            {
                ib++;
            }
        }
        cout << ia + ib << endl; 
        return 0;
    }
}