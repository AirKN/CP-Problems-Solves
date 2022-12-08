#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int s;
        cin >> s;
        vector<int> a(s);
        for(int i=0;i<s;i++)
            cin >> a[i];
        
        int res=a[0];
        for(int i=0;i<s;i++)
            res&=a[i];

        cout<<res<<"\n";

    }

    return 0;
}