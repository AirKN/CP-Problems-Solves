#include <iostream>

using namespace std;

int main()
{
    int n,h,a[1000],w=0;
    cin >> n >> h;
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    for(int i=0;i<n;i++)
        w = (a[i]>h) ? w+2 : w+1;
    
    cout << w;
    return 0;
}