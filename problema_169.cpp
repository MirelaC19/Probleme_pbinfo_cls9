/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 18:44:46
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 18:46:52
 * @ Description: https://www.pbinfo.ro/probleme/169/sumcif
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, s = 0;
    
    cin >> n;

    cn = n;
    while (n != 0)
    {
        cn = n % 10;
        s = s + cn;
        n = n / 10;
    }
    cout << s;
}