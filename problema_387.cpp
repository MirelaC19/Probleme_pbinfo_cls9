/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 15:59:09
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 16:07:16
 * @ Description: https://www.pbinfo.ro/probleme/387/suma-divizorilor-impari
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long s = 1LL;

    cin >> n;
    
    if (n == 1)
    {
        s = 1;
    }
    else if (n % 2 != 0)
    {
        s += n;   
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (n / i == i || n / i % 2 == 0) ? 0 : n / i;
            s += (i % 2 != 0) ? i : 0;
        }
    }
    cout << s << endl;
    return 0;
}