#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c=0;
    cin >> n >> k;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin >> t[i];
        if(t[i]<=k && t[i-1]>k) // !!!!!!!!!!!!!!!
            l=i;
    }
    for(int i=0;i<n;i++)
    {
        if(t[i]<=k)
            break;
        c++;
    }
    if(c==n)
        cout << l;
    else
        cout << c;
    return 0;
}