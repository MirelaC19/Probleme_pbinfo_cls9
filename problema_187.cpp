/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-31 11:32:03
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-31 11:42:42
 * @ Description: https://www.pbinfo.ro/probleme/187/ciffrecv
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("ciffrecv.in");
ofstream out("ciffrecv.out");

int main(void)
{
    int n;

    int a[4] = {0};

    while (in >> n)
    {
        // if (n == 7)
        // {
        //     a[3]++;
        // }
        // if (n == 5)
        // {
        //     a[2]++;
        // }
        // if (n == 3)
        // {
        //     a[1]++;
        // }
        // if (n == 2)
        // {
        //     a[0]++;
        // }
        
        switch (n)
        {
            case 7: 
                a[3]++;
                break;
            case 5:
                a[2]++;
                break;
            case 3:
                a[1]++;
                break;
            case 2:
                a[0]++;
                break;
            default:
                break;
        }
    }

    if (a[3] > 0)
    {
        out << 7 << " " << a[3] << endl;
        return 0;
    }
    if (a[2] > 0)
    {
        out << 5 << " " << a[2] << endl;
        return 0;
    }
    if (a[1] > 0)
    {
        out << 3 << " " << a[1] << endl;
        return 0;
    }
    if (a[0] > 0)
    {
        out << 2 << " " << a[0] << endl;
        return 0;
    }
}