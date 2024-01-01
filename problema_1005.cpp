/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-31 10:54:28
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-31 12:28:44
 * @ Description: https://www.pbinfo.ro/probleme/1005/numere8
 */ 

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere8.in");
ofstream out("numere8.out");

int main(void)
{
    int n;
    int a[9999] = {0};
    
    while (in >> n)
    {
        if (n < 10000 && n > 0)
        {
            a[n - 1] = 1;
        }
    }

    for (int i = 9998; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            out << i + 1 << " ";
        }
    }
}