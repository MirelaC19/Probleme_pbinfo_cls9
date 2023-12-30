/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:40:10
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:42:18
 * @ Description: https://www.pbinfo.ro/probleme/50/expresie
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long p = 1LL, s = 0LL;

    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        p = p * i;
        s += p;
    }

    cout << "Rezultatul este " << s << endl;
}