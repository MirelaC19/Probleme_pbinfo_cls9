/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:45:29
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:52:29
 * @ Description: https://www.pbinfo.ro/probleme/369/oglindit3
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 0, s = 0;

    cin >> n;

    while (n != 0)
    {
        nr += n % 10;
        n = n / 10;
    }
    while (nr != 0)
    {
        s = s * 10 + nr % 10;
        nr = nr / 10;
    }
    cout << s << endl;
}