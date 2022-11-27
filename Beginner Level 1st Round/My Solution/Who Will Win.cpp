/*

author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a != b)
    {
        if (a > b)
        {
            cout << "Argentina" << endl;
        }
        else if (b > a)
        {
            cout << "Brazil" << endl;
        }
    }
    else
    {
        cout << "Draw" << endl;
    }
    return 0;
}