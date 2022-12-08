#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;cin >> n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int l = s.size();
        if(l>10)
            cout << s[0] << l-2 << s[l-1] << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
