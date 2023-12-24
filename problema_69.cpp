/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:01:25
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 12:05:06
 * @ Description: https://www.pbinfo.ro/probleme/69/oglindit
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 0, cn;

    cin >> n;
    cn = n;
    while (n != 0)
    {
        cn = n % 10;
        nr = nr * 10;
        nr = cn * 10 + nr;
        n = n / 10;
    }
    cout << nr / 10 << endl;

    return 0;
}