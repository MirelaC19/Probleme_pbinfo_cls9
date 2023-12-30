/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:23:16
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:28:24
 * @ Description: https://www.pbinfo.ro/probleme/3551/inaltimetriunghi
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int c1, c2, i;
    float h = 0;
    long long hc = 0LL;

    cin >> c1 >> c2 >> i;
    h = 1.0 * c1 * c2 / i;
    hc = 100 * h;

    cout << fixed << setprecision(2) << hc * 1.0 / 100 << endl;
}