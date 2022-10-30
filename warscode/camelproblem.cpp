#include <iostream>
#include <string>
using namespace std;

string to_camel_case(string text) {
    int n = text.size();
  string s;
  bool yup = false;
  for(int i=0;i<n;i++)
  {
    
    if( text[i] == '-' || text[i] == '_')
    {
      yup = true;
      continue;
    }
    else
    {
      if(yup){
        s+= toupper(text[i]);
        yup = false;
      }else
        s+= text[i];
        
    }
    //cout << text[i] << "  " << s[i] << "\n";
  }
  return s;
}

int main()
{
    string t;
    cin >> t;
    cout << to_camel_case(t);
    return 0;
}