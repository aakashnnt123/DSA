#include <bits/stdc++.h>
using namespace std;


int remove_duplicate(vector<int> &arr)
{
  int i =0;

  for(int j=1;j<arr.size();j++)
  {
    if(arr[i] != arr[j])
    {
      arr[i+1] = arr[j];
      i++;
    }
  }
  return i+1;
}

int main()
{
  vector<int>arr ={1,1,2,2,2,3,3};
  int k = remove_duplicate(arr);

  for(int i =0 ;i<k;i++)
  {
    cout<<arr[i]<<" ";
  }
}