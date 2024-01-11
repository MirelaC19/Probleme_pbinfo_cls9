/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:25:34
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 13:31:26
 * @ Description: https://www.pbinfo.ro/probleme/4315/cifre17
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt = 0, nr = 0, cn;

    cin >> n;
    cn = n;

    while (cn != 0)
    {
        cn = cn / 10;
        cnt++;
    }

    int a = 1;
    while (cnt != 2)
    {
        a = a * 10;
        cnt--;
    }

    nr = (n / a) % 10;
    
    int o = 0;
    while (n != 0)
    {
        if (n % 10 > nr)
        {
            o++;
        }
        n = n / 10;
    }

    cout << o << endl;
}