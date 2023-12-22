/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 15:37:06
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 15:39:37
 * @ Description: https://www.pbinfo.ro/probleme/4272/prodpare
 */ 

#include <iostream>

using namespace std;

int main(void)
{
    long long int n, i = 2, p = 1;

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