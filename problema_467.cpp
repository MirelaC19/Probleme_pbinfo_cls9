/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 18:56:38
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 18:59:19
 * @ Description: https://www.pbinfo.ro/probleme/467/numar
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, p = 1;

    cin >> n;
    cn = n;
    n = n / 100;
    p = n * (cn % 10);
    cout << p << endl;
}