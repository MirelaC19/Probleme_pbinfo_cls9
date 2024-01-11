/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:47:05
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:48:24
 * @ Description: https://www.pbinfo.ro/probleme/4545/sumacuburi
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, i = 1;
    long long s = 0LL;

    cin >> n;

    while (n != 0)
    {
        s += i * i * i;
        i++;
        n--;
    }
    cout << s << endl;
}