/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:51:05
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:53:47
 * @ Description: https://www.pbinfo.ro/probleme/896/factorialf
 */

#include <iostream>

using namespace std;
int fact(int n);
int main(void)
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int p = 1;
    for (int i = 1; i <= n ; i++)
    {
        p = i * p;
    }
    return p;
}