#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; 
    cin >> s;
    int l = s.size();
    int x=0,b=0;
    for(int i=0;i<l;i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            x++;
    if(x<l-x)
        for(int i=0;i<l;i++)
            s[i]=toupper(s[i]);
    else
        for(int i=0;i<l;i++)
            s[i]=tolower(s[i]);
            
    cout << s << '\n';
    return 0;
}