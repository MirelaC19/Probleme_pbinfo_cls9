/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 11:45:56
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 11:47:46
 * @ Description: https://www.pbinfo.ro/probleme/1650/acelasinumar
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, k, s = 0;

    cin >> n >> k;
    int a;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        s += a;
    }
    if (n == n + s)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}