/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:18:43
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:26:23
 * @ Description: https://www.pbinfo.ro/probleme/173/medie1
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int a, b, c, m1;
    double m;

    cin >> a >> b >> c;

    m = 1.0 * (a + b + c) / 3;
    m1 = m * 100;
    cout << fixed << setprecision(2) << m1 / 100.0;
}