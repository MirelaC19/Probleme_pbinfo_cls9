/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:30:27
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 12:36:31
 * @ Description: https://www.pbinfo.ro/probleme/2501/sum-cons-impare
 */

#include <iostream>

using namespace std;

int main(void)
{
    long long int n, s = 0;

    cin >> n;

    for (int i = 1; i <= n; i = i + 2)
    {
        s = s + i;
    }
    cout << s << endl;
}