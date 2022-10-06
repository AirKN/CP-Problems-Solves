#include <bits/stdc++.h>

using namespace std;



int main()
{
    const int N = 100;
    int b[N][N];
    int a[N][N];
    int n,m,t;
    cin >> m >> n;

    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            a[i][j] = 1;
    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> b[i][j];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][j] == 0)
                {
                    for(int x=0;x<n;x++)
                        a[i][x] = 0;
                    for(int x=0;x<m;x++)
                        a[x][j] = 0;
                }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(b[i][j])
                    {
                        t = 0;
                        for(int x=0;x<n;x++)
                                t+= a[i][x];
                                
                        for(int x=0;x<m;x++)
                                t+= a[x][j];
                        if(!t)
                            {
                                cout << "NO\n";
                                return 0;
                            }
                    }
            }
        
    }

    cout << "YES\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout <<"\n";
    }

    return 0;
}