#include<bits/stdc++.h>
using namespace std;

void rearrange_array(vector<int>arr)
{
  int n = arr.size(); 
  sort(arr.begin() , arr.end());
  reverse(arr.begin()+n/2,arr.end());

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  vector<int>arr = {4,2,8,6,15,5,9,20};
  rearrange_array(arr);
}