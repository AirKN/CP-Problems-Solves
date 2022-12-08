#include<bits/stdc++.h>
#define endl '\n'
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr)
#define x first
#define y second
#define pb push_back
#define lowbit(x) (x & (-x))
#define point(n) cout << fixed << setprecision(n)
#define YN(flag) cout << (flag ? "YES" : "NO") << endl
#define debug cout << "debug" << endl
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PLL;
typedef pair<int,int> PII;
typedef pair<double,double> PDD;
const int INF = 0x3f3f3f3f;
const ll mod = 1e9 + 7;
const double PI = acos(-1);
const double eps = 1e-7;
const int N = 110, M = 2 * N;


int a[N];
int n, k, d;
ll dp[N][2];

void solve()
{
    cin >> n >> k >> d;
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= min(k, i); j++)
        {
            if(j < d)
                dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
            dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
            if(j >= d)
                dp[i][1] = (dp[i][1] + dp[i - j][0]) % mod;
        }
    }
    cout << dp[n][1] << endl;
}

int main()
{
    IOS;
    int _ = 1;
    //cin >> _;
    while(_--)
    {
        solve();
    }
}
