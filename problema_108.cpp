/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:36:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-06 13:06:51
 * @ Description: https://www.pbinfo.ro/probleme/108/aparitii2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, cnt = 0, nr = 1, a = 0;

    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    
    cn = n;

    while (cn != 0)
    {
        cn = cn / 10;
        cnt++;
    }

    while (cnt > 1)
    {
        nr = nr * 10;
        cnt--;
    }

    cn = n / nr;

    while (n != 0)
    {
        if (n % 10 == cn)
        {
            a++;
        }
        n = n / 10;
    }

    cout << a << endl;
}