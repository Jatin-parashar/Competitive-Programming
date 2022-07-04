// @AUTHOR -
//         - [JATIN PARASHAR] -
//                            - jatin_p18

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define F first
#define S second
#define pb push_back
#define pqa priority_queue<int, vector<int>, greater<int>>
#define pqd priority_queue<int>
#define mod 1e9 + 7
#define ps(ans, y) fixed << setprecision(y) << ans

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x))
#define reverse(x) reverse(all(x))
#define minimum(x) *min_element(all(x))
#define maximum(x) *max_element(all(x))
#define setbits(x) __builtin_popcount(x)

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;        // ordered_set
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> mpbds; // ordered_multiset

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void invec(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.pb(x);
    }
}
void printvec(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

void printmap(map<int, int> &mp)
{
    for (auto x : mp)
    {
        cout << x.F << " " << x.S << endl;
    }
}
vector<int> psum(vector<int> vec)
{
    vector<int> vec2;
    int sum = 0;
    for (auto x : vec)
    {
        sum += x;
        vec2.pb(sum);
    }
    return vec2;
}
vector<int> ssum(vector<int> vec)
{
    vector<int> vec2;
    reverse(vec);
    int sum = 0;
    for (auto x : vec)
    {
        sum += x;
        vec2.pb(sum);
    }
    reverse(vec2);
    return vec2;
}

void solve()
{
    // code here
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
