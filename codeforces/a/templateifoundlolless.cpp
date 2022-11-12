#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(v) (int)(v.size())
#define watch(x) cout << #x << " = " << x << endl;
#define fix(n) cout << fixed << setprecision(n);
#define mem(v, d) memset(v, d, sizeof(v))
ll gcd(ll x, ll y) { return(!y) ? x : gcd(y, x % y); }
ll lcm(ll x, ll y) { return((x / gcd(x, y)) * y); }
const int N = 1e6 + 1;
const int MOD = 1e7 + 9;
const int OO = 0x3f3f3f3f3;
const double EPS = 1e-9;
const double PI = acos(-1);
using namespace std;
int main() {
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	//freopen("mex.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, cnt = 0, ans = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x > 0)cnt += x;
		else if (x == -1) {
			if (cnt == 0)ans++;
			else cnt--;
		}
	}cout << ans;
	return 0;
}


