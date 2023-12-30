/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:53:34
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:55:02
 * @ Description: https://www.pbinfo.ro/probleme/362/sumcif1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, m = 0, s = 0;

    cin >> n;
    while (n != 0)
    {
        m++;
        if (m % 2 == 0)
        {
            s = s + (n % 10);
        }
        n = n / 10;
    } 
    cout << s << endl;
}