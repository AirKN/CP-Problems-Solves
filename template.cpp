#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0)
#define lp(i,n) for(int i = 0; i < n; i++)
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define invrep(i,a,b) for(int i = a; i >= b; i--)
#define PB(a) push_back(a)
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(v) v.begin(),v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line cout<<endl
#define EPS 0.0000000001
#define PI 3.14159265358979323846
#define DEC greater<int>()
#define X real()
#define Y imag()
using namespace std;
typedef complex<long double> P;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<ii> vii;
ll sum_vector(vi v){ll s = 0;for(auto x:v)s+=(ll)x;return s;}
vl cum_vector(vi v){int n = sz(v);vl cum(n);cum[0] = v[0];rep(i,1,n-1)cum[i] =(ll) v[i] + cum[i-1];return cum;}
void eyle(bool value){cout<<(value?"YES":"NO")<<"\n";}
vi in(int n){vi v(n);lp(i,n)cin>>v[i];return v;}
void out(vi v){for(auto x:v)cout << x <<" ";line;}
bool is_integer(double x){return floor(x) == ceil(x);}
ll mi(ll a, ll b){return a>b?b:a;}
ll ma(ll a, ll b){return a>b?a:b;}
ll sum_n(int n){return (ll)n*(n+1)/2;}
double my_log(int base, ll N){return (double)log(N)/log(base);}
ll gcd(ll a, ll b){if(!b)return a;return gcd(b, a % b);}
int vec_gcd(vi v){int g = v[0];rep(i,1,sz(v)-1)g = gcd(g,v[i]);return g;}
ll lcm(int a,int b){return (ll)a*b / gcd(a,b);}
ll vec_lcm(vi v){ll ans = v[0];rep(i,1,sz(v)-1)ans = ((ll)((v[i]*ans))/(gcd(v[i],ans)));return ans;}
int ctoi(char c){return c-'0';}
int long_double_to_int(long double x){if(fabs(x-ceil(x)) <= EPS)return ceil(x);return floor(x);}
/* custom sort functions */
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool sort_dec_pair(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first > b.first;
}
int compare_double(double a,double b){return fabs(a-b)<=EPS?0:a-b>0?1:-1;}
const int N = 100000;
const int INF = INT_MAX;
int mod = 1000000000+7;


void solve(int test)
{

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    fast;
    int t = 1;
    cin>>t;
    rep(i,1,t)
    {
        solve(i);
    }
    return 0;
}

