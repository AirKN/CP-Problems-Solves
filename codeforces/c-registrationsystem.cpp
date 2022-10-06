#include <iostream>
#include <map>

using namespace std;

int main()
{
    int x;
    string s;
    map<string,int>m;
    cin >> x;
    // while(x--)  very smart gotta use it more
    for(int i =0;i<x;i++)
    {
        cin >> s;
        if(m.find(s)!=m.end())
        {
            cout << s << m[s] << "\n";
            m[s]++;
        }
        else
        {
            m.insert(make_pair(s,1));
            cout << "OK\n";
        }
    }
    return 0;
}
