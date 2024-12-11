#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int>arr)
{
  int largest = INT_MIN;
  int second_largest = INT_MIN;

  for(int i=0;i<arr.size();i++)
  {
     if(arr[i]>largest)
  {
    second_largest = largest;
    largest = arr[i];
  }
  else if(arr[i]<largest && arr[i]>second_largest)
  {
    second_largest = arr[i];
  }
}

  return second_largest;

}
 

int  second_smallest(vector<int>arr)
{
  int smallest = INT_MAX;
  int second_smallest = INT_MAX;

  for(int i=0;i<arr.size();i++)
  {
     if(arr[i]<smallest)
  {
    second_smallest = smallest;
    smallest = arr[i];
  }
  else if(arr[i]>smallest && arr[i]<second_smallest)
  {
    second_smallest = arr[i];
  }
}

  return second_smallest;
}
int main()
{
  vector<int>arr = {1,2,4,7,7,5};
  int sec_largest = second_largest(arr);
  int sec_smallest = second_smallest(arr);

  cout<<"sec_largest is :"<<sec_largest;
  cout<<"sec_smallest is :"<<sec_smallest;
}