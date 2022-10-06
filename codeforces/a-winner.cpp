#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>m;
    vector<pair<string,int>>v;
    int n,c,ma;
    string s;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s >> c;
        if(m.find(s)!=m.end())
            m[s]+=c;
        else
            m[s]=c;
        v.push_back(make_pair(s,m[s]));
    }
    ma= INT_MIN;
    
    for(map<string,int>::iterator it=m.begin(); it!=m.end();it++)
        ma = max(ma,it->second);

    for(int i=0;i<n;i++)
    {
        if(m[v[i].first] == ma && v[i].second>=ma)
        {
            cout << v[i].first << "\n";
            return 0;
        }
    }
    return 0;
}