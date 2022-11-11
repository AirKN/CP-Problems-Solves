#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    char s[n][10000];
    for(int i=0;i<n;i++)
        cin >> s[i];

    for(int i=0;i<n;i++)
    {
        int l = strlen(s[i]);
        if(l>10)
            cout << s[i][0] << l-2 << s[i][l-1] << '\n';
        else
            cout << s[i] << '\n';
    }
    return 0;
}