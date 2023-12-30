/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 17:29:16
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 17:45:15
 * @ Description: https://www.pbinfo.ro/probleme/408/divizorii-oglinditului
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 0, cnt = 0;

    cin >> n;
    
    if (n == 0)
    {
        cnt = 1;
    }
    while (n != 0)
    {
        nr = nr * 10 + n % 10;
        n = n / 10;
    }
    for (int i = 1; i <= nr; i++)
    {
        if (nr % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}