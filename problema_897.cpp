/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:55:02
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:57:02
 * @ Description: https://www.pbinfo.ro/probleme/897/sumciff
 */

#include <iostream>

using namespace std;
int sumcif(int n);

int main(void)
{
    int n;
    cin >> n;
    cout << sumcif(n) << endl;
}

int sumcif(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    return s;
}