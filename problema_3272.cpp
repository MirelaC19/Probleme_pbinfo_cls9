/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 17:57:48
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 18:04:49
 * @ Description: https://www.pbinfo.ro/probleme/3272/sumdivogl
 */

#include <iostream>

using namespace std;
int oglindit(int n);
long long suma_div(int n);

int main(void)
{
    int n, m;
    long long s = 0LL;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        s += suma_div(oglindit(m));
    }
    cout << s << endl;
}

int oglindit(int n)
{
    int ret = 0;
    if (n < 10)
    {
        return n;
    }
    while (n != 0)
    {
        ret = ret * 10 + n % 10;
        n = n / 10;
    }
    return ret;
}

long long suma_div(int n)
{
    long long s = 1LL;

    if (n > 1)
    {
        s += n;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (n / i == i) ? 0 : n / i;
            s += i;
        }
    }
    return s;
}