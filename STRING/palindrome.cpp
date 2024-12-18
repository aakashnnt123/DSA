#include<bits/stdc++.h>
using namespace std;

void palindrome(string s)
{   
  int start =0;
  int end  = s.length()-1;

   while(start <= end)
   {
    if(!isalnum(s[start]))
       start++;

    else if(!isalnum(s[end]))
       end--;

     else if(tolower(s[start]) !=  tolower(s[end]))
     {
         cout<<"Not a palindrome"<<" ";
         return;
     }
        

     else{
      start++;
      end--;
     }

   }
   cout<<"Palindrome";
}

int main()
{
  string s = "A1b2B1a";
  palindrome(s);
}