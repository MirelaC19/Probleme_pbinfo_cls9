/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:00:28
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:02:11
 * @ Description: https://www.pbinfo.ro/probleme/468/numar1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, nr, pp;

    cin >> n;
    
    cn = n;
    n = n / 100;
    nr = (n * 10) + (cn % 10);
    pp = nr * nr;
    cout << pp;  
}