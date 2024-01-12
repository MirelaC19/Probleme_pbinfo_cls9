/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-12 21:41:27
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-12 22:04:44
 * @ Description: https://www.pbinfo.ro/probleme/4456/prime4
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("prime4.in");
ofstream out("prime4.out");

int main(void)
{
    int ciur[1000] = {0};

    ciur[0] = -1;
    ciur[1] = -1;

    for (int i = 2; i < 1000; i++)
    {
        if (ciur[i] == 0)
        {
            for (int j = i + 1; j < 1000; j++)
            {
                if (j % i == 0)
                {
                    ciur[j] = -1;
                }
            }
        }
    }

    int n, b, max = 0;

    in >> n;

    for (int i = 0; i < n; i++)
    {
        in >> b;
        if (ciur[b] != -1)
        {
            ciur[b] += 1;
            if (max < ciur[b])
            {
                max = ciur[b];
            }
        }
    }
    // for (int i = 2; i < 1000; i++)
    // {
    //     if (max < ciur[i])
    //     {
    //         max = ciur[i];
    //     }
    // }
    
    for (int i = 2; i < 1000; i++)
    {
        if (ciur[i] == max)
        {
            out << i << endl;
            return 0;
        }
    }
}