/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:35:27
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:37:28
 * @ Description: https://www.pbinfo.ro/probleme/103/curte
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, p = 0;
    long long ar = 0LL;

    cin >> a >> b;

    ar = a * b;
    p = 2 * a + 2 * b;

    cout << ar << " " << p << endl;
}