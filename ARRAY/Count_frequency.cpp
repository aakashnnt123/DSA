#include<bits/stdc++.h>
using namespace std;


void frequency_count(vector<int>arr)
{
  unordered_map<int,int>mpp;

  for(int i=0;i<arr.size();i++)
  {
    mpp[arr[i]]++;
  }

  for(auto x : mpp)
  {
    cout<<"number of frequency of "<<x.first<<" is equal to : "<<x.second<<" "<<endl;;
  }
}
int main()
{
  vector<int>arr = {2,3,4,5,6,2,3,5,4,5,3,5,2,5,3};
  frequency_count(arr);
}