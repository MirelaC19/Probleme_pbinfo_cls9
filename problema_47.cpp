/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:44:47
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:46:22
 * @ Description: https://www.pbinfo.ro/probleme/47/sumapatrate
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, i = 1, s = 0;

    cin >> n;

    while (n != 0)
    {
        s += i * i;
        i++;
        n--;
    }
    cout << "Rezultatul este " << s << endl;
}