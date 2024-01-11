/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-11 21:06:07
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-11 22:21:40
 * @ Description:https://www.pbinfo.ro/probleme/4508/eratostene10
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, r, max = 1;
    bool is_valid = true;
    long long cnt = 0LL, cnt_rest = 0LL;
    cin >> n >> r;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
        if (a[i] == r)
        {
            cnt_rest += 1;
        }
    }

    if (max < r)
    {
        is_valid = false;
    }
    
    int* elem = new int[(unsigned int)max + 1] {0};
    // int b;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> b;
    //     if (b > r && is_valid == true)
    //     {
    //         // elem[b] += 1; 
    //         cnt += cnt_rest;
            
    //         for (int j = b + r; j <= max; j += b)
    //         {
    //             elem[j] += 1;
                
    //         }
    //     }
    // }

    // another approach

    int c[n];
    int max2 = 1;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] > max2)
        {
            max2 = c[i];
        }
    }
    int* elem2 = new int[max2 + 1] {0};
    for (int i = 0; i < n; i++) 
    {
        elem2[c[i]] += 1;
    }
    for (int i = 1; i < max2 + 1; i++)  {
        if (elem2[i] != 0)  {
            if (i > r && is_valid == true)
            { 
                cnt += cnt_rest * elem2[i];
                for (int j = i + r; j <= max; j += i)
                {
                    elem[j] += elem2[i];
                    
                }
            }
        }
    }
    delete[] elem2;


    //end approach

    

    if (is_valid == false)
    {
        cout << 0 << endl;
        delete[] elem;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cnt += elem[a[i]];
    }

    delete[] elem;

    cout << cnt << endl;
}
