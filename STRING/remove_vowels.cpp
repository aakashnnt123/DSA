#include <iostream>
#include <string.h>
using namespace std;

string Removewhitespace(string str)
{
  string nstr;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ')
    {
        nstr += str[i];
        
    }
  
  }
 
  return nstr;
}
int main()
{
  string str = "take u forward";
  string nstr = Removewhitespace(str);

  cout<<nstr<<endl;;
}