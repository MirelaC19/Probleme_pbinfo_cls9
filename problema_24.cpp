/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:58:10
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 20:18:47
 * @ Description: https://www.pbinfo.ro/probleme/24/oglindit2
 */

#include <iostream>

using namespace std;
int oglindit(int n);

int main(void)
{
    int n;

    cin >> n;
    cout << oglindit(n) << endl;
}

int oglindit(int n)
{
    int nr = 0;
    while (n != 0)
    {
        nr = nr * 10 + n % 10;
        n = n / 10;
    }
    return nr;
}