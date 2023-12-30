/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 17:16:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 18:17:24
 * @ Description: https://www.pbinfo.ro/probleme/1568/mediediv
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, cnt = 2;
    long long s = 1LL;
    float ma = 0, a = 0;

    cin >> n;

    if (n == 1)
    {
        cnt = 1;
    }
    if (n > 1)
    {
        s += n;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && n / i != i)
        {
            cnt = cnt + 2;
        }
        if (n % i == 0 && n / i == i)
        {
            cnt++;
        }
        if (n % i == 0)
        {
            s += (n / i == i) ? 0 : n / i;
            s += i;
        }
    }
    
    ma = s * 1.0 / cnt ;
    ma = ma * 100;
    a = ma * 1.0;
    cout << fixed << setprecision(2) << a / 100 << endl;
    return 0;
}