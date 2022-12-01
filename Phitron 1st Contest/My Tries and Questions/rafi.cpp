#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        x = 100 - x;
        int ans;
        if (x > 40)
        {
            ans = (20 * 3) + (20 * 2) + (x - 40);
        }
        else if (x > 20)
        {
            ans = (20 * 3) + ((x - 20) * 2);
        }
        else
            ans = x * 3;
        cout << ans << endl;
    }
}