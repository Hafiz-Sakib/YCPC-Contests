/*

author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = max(a, b) - min(a, b);
    cout << result << endl;
    return 0;
}