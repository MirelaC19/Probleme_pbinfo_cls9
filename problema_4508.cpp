/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 20:46:33
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-31 14:44:27
 * @ Description: https://www.pbinfo.ro/probleme/4508/eratostene10
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, b, r, max = 1;
    long long cnt = 0LL;
    cin >> n >> r;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
    }
    if (max < r)    
    {
        max = r;
    }
    
    int* elem = new int[max] {0};

    //cout << "max=" << max << endl;
    
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        // if (b > max)
        // {
        //     elem[max - 1] += 1;
        // }
        if (b > r)
        {
            for (int j = b + r; j <= max; j += b)
            {
                elem[j - 1] += 1;
            }
        } else if (b == r)  
        {
            elem[max - 1] += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < r)
        {
            cnt += elem[max - 1];
        }
        else
        {
        cnt += elem[a[i] - 1];
        }
    }

    delete[] elem;
    
    cout << cnt << endl;
}