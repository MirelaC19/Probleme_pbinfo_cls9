/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:30:07
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 14:28:47
 * @ Description: https://www.pbinfo.ro/probleme/2889/disc
 */

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void)
{
    double r;
    double a = 0, p = 0;
    // const double P = 3.14159265359;

    cin >> r;
    a = M_PI * r * r;
    p = 2 * M_PI * r;

    cout << fixed << setprecision(2) << a << " " << p << endl;
}