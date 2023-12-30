/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:18:47
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:22:27
 * @ Description: https://www.pbinfo.ro/probleme/453/distincte1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, cnt = 0;

    cin >> a >> b >> c;

    if (a != b)
    {
        cnt++;
    }
    if (a != c)
    {
        cnt++;
    }
    if (b != c)
    {
        cnt++;
    }
    if (a == b && b == c)
    {
        cnt = 1;
    }
    
    cout << cnt << endl;
}