/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 11:35:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 11:40:11
 * @ Description: https://www.pbinfo.ro/probleme/115/medie
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, cnt = 0, a, s = 0;
    float m = 0;

    cin >> n;

    while (n != 0)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            s += a;
            cnt++;
        }
        n--;
    }
    m = s * 1.0 / cnt;

    int ma;

    ma = m * 100;

    cout << fixed << setprecision(2) << ma * 1.0 / 100 << endl;
}