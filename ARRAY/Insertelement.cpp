#include<bits/stdc++.h>
using namespace std;


void insertbeginning(vector<int> &arr , int k)
{
  int n=arr.size();
   
   arr.push_back(0);
   
  for(int i=n-1;i>=0;i--)
  {
    arr[i+1] = arr[i];
  }

  arr[0] = k;

  for(int i=0;i < arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

void insertending(vector<int> &arr , int k)
{
  int n=arr.size();
   
  arr.push_back(0);

  arr[n] = k;

  for(int i=0;i < arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
     cout<<endl;
}

void insertPos(vector<int> &arr , int pos , int k)
{
  int n=arr.size();
   
   arr.push_back(0);
   
  for(int i=n-1;i>=pos-1;i--)
  {
    arr[i+1] = arr[i];
  }

  arr[pos-1] = k;

  for(int i=0;i < arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
     cout<<endl;
}
int main()
{
  vector<int>arr ={1,2,3,4,5,6};
  insertbeginning(arr , 5);
  insertending(arr , 7);
  insertPos(arr , 4 , 9);

}