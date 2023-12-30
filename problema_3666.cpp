/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 18:48:19
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 18:59:13
 * @ Description: https://www.pbinfo.ro/probleme/3666/vernrimpdiv
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt = 2;

    cin >> n;

    if (n == 1)
    {
        cout << "da" << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i != i)
            {
                cnt = cnt + 2;
            }
            else 
            {
                cnt++;
            }
        }
    }
    if (cnt % 2 != 0)
    {
        cout << "da" << endl;
    }
    else
    {
        cout << "nu" << endl;
    }
}