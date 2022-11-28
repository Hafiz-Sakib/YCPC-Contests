/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, x = 0;
    while (t--)
    {
        int n, x = 0, r = 0;
        cin >> n;
        while (1)
        {
            r = pow(2, x);
            if (r >= n)
            {
                break;
            }
            x++;
        }
        cout << r << endl;
    }

    return 0;
}