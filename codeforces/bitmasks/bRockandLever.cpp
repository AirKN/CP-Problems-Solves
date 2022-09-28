#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];

        int res=0;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
            {
                ll e,x;
                e = v[i]&v[j];
                x = v[i]^v[j];
                if(e>=x)
                    res++;
            }
        cout << res << "\n";
        
    }
}