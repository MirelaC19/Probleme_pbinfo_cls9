/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 18:29:46
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 19:14:30
 * @ Description: https://www.pbinfo.ro/probleme/4330/divizori7
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a = 0, b = 0;

    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (a == 0)
            {
                a = i;
                b = n / i;
            } 
            else if (b > i)
            {
                b = i;
            }
        }
    }
    cout << a + b << endl;
}