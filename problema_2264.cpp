/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 18:52:04
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 18:55:52
 * @ Description: https://www.pbinfo.ro/probleme/2264/sumacifre2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0;
    cin >> n;
    s = (n % 10) + (n / 10);
    cout << s;
}