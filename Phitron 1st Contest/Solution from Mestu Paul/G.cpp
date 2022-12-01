#include <bits/stdc++.h>
using namespace std;
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vs vector<string>
///............x...........///
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define ff first
#define ss second
#define bg begin()
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())
#define ft cout << "for test" << endl;
#define read(v, a, n)           \
    for (int i = a; i < n; i++) \
        cin >> v[i];
#define print(v)           \
    for (auto it : v)      \
        cout << it << " "; \
    cout << endl;
#define PI acos(-1.0)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define t_c           \
    int test, cs = 1; \
    cin >> test;      \
    while (test--)
#define casep cout << "Case " << cs++ << ": ";
///................function.....................///

#define D(a) (double)(a)
#define siz(s) (int)(s.size())
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define Min(a) *min_element(all(a))
///#define mod 1000000007
///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
///........constant........///
const ll N = 1e6 + 5;
void file()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool DecToBin(ll a, vb &bit, int n)
{
    bit.clear();
    while (a)
    {
        bit.pb(a & 1);
        a = a >> 1;
    }
    while (bit.size() < n)
        bit.pb(0);
    reverse(all(bit));
    int o = count(all(bit), 1);
    int z = bit.size() - o;
    if (o == n / 2 or z == n / 2)
        return true;
    return false;
}
int main()
{
    FIO;
    // vb aaa;
    // for(int i=0; i<10; i++){
    //     DecToBin(i,aaa,10);
    //     print(aaa);
    // }
    t_c
    {
        int n, i, j;
        cin >> n;
        vi v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        // sort(all(v));
        int ans = INT_MAX;
        vb bit;
        for (i = 0; i < (1 << n); i++)
        {
            if (!DecToBin(i, bit, n))
                continue;
            int one = 0, two = 0;
            //  print(bit);
            for (j = 0; j < bit.size(); j++)
            {
                if (bit[j])
                    one += v[j];
                else
                    two += v[j];
            }
            ans = min(ans, abs(one - two));
        }
        cout << ans << endl;
    }
}