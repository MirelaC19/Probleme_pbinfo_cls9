/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:04:10
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:06:33
 * @ Description: https://www.pbinfo.ro/probleme/2604/schimbarecifre
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, nr, pp;

    cin >> n;

    cn = n % 10;
    n = n / 10;
    nr = (cn * 10) + n;
    if (nr / 10 == 0)
    {
        nr = nr % 10;
    }
    pp = nr * nr;
    cout << pp;
}