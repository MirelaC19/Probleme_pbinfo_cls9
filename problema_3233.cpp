/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 11:24:18
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 11:25:41
 * @ Description: https://www.pbinfo.ro/probleme/3233/afisarenumereimpare1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    while (n != 0)
    {
        if (n % 2 != 0)
        {
            cout << n << " ";
        }
        n--;
    }
    cout << endl;
}