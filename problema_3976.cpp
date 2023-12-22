/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 15:19:37
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 15:26:33
 * @ Description: https://www.pbinfo.ro/probleme/3976/prodimpare
 */

#include <iostream>

using namespace std;

int main(void)
{
    long long int n, p = 1, i = 1;;
    
    cin >> n;

    do
    {
        p = p * i;
        i = i + 2;
        n--;
    } while (n != 0);
    
    cout << p;

    return 0;
    
}