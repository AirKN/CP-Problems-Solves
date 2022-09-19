#include <bits/stdc++.h>

using namespace std;

const long long modd = 1e9 +7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        long long power=1;
        for(int i=0;i<k;i++)
        {
            power*=n;
            power%=modd;
        }
        cout << power << "\n";
    }
}