/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 11:37:35
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 11:43:29
 * @ Description: https://www.pbinfo.ro/probleme/2299/media-geometrica
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int n, a, p = 1;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        p = p * a;
    }
    cout << pow(p,n);
}