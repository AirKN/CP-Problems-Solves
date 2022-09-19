#include <bits/stdc++.h>

using namespace std;

int op(int n1, int n2, char c)
{
   if(c =='+')
        return n1 + n2;
    else if(c =='-')
        return n1 - n2;
    else if(c =='*')
        return n1 * n2;
    else
        return n1 / n2;
}

int calcres(vector<string>& tokens)
{
    string s;
    int n = tokens.size();
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        s = tokens[i];
        if(s.size()==1 && (s=="+" || s=="-" || s=="*" || s=="/"))
        {
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            st.pop();
            int res = op(n1,n2,s[0]);
            st.push(res);
        }
        else
        {
            st.push(stoi(s));
        }
    }
    return st.top();
}

int main()
{
    int x;
    cin >> x;
    string s;
    vector<string> v;
    for(int i=0;i<x;i++)
    {
        cin >> s;
        v.push_back(s);
    }
    
    int res= calcres(v);
    cout << res;

    return 0;
}