/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-31 11:06:37
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-31 11:25:29
 * @ Description: https://www.pbinfo.ro/probleme/525/numere1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr, cnt = 2;

    cin >> n;
    
    int a[900] = {0}, b[2] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> nr;
        if (nr > 99 && nr < 1000)
        {
            a[nr - 100] = 1;
        }
    }
    for (int i = 899; i >= 0 && cnt != 0; i--)
    {
        if (a[i] == 0)
        {
            b[cnt - 1] = i + 100;
            cnt--;
        }
    }
    if (b[0] != 0 && b[1] != 0)
    {
        cout << b[0] << " " << b[1] << endl;
    }
    else
    {
        cout << "NU EXISTA" << endl;
    }
}