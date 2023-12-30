/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:14:23
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 19:31:21
 * @ Description: https://www.pbinfo.ro/probleme/3810/sfera
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    int n;
    long long ca, cv;
    double a = 0, v = 0;

    cin >> n;
    a = 4 * M_PI * n * n;
    v = 4 * M_PI * n * n * n / 3;
    ca = a * 100;
    cv = v * 100;
    cout << fixed << setprecision(2) << ca * 1.0 / 100 << " " << cv * 1.0 / 100 << endl;
}