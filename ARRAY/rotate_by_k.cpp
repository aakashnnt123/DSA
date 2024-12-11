#include <bits/stdc++.h>
using namespace std;



void rotate_array(vector<int>arr , int k)
{
   vector<int>temp(arr.size());
   for(int i=0;i<arr.size();i++)
   {
      temp[(i+k+1)%arr.size()] = arr[i];
   }

   for(int i=0;i<temp.size();i++)
   {
     cout<<temp[i]<<" ";
   }
}
int main()
{
  vector<int>arr = {1,2,3,4,5,};
  int k=2;
  rotate_array(arr , k);
}