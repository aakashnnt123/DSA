#include<iostream>
using namespace std;

void print_array(int array[],int size)
  {
     for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
  }


int main()
{
    int n;
     cout<<"enter the values of n";
     cin>>n;

    // declare
   int arr[n];
   cout<<"enter the values for array";
   //value input.
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cin>>arr[i];
    }
    //accessing an array.
    //  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    // {
    //     cout<<arr[i]<<" 10";
    // }


    //accessing via function

    print_array(arr,n);
}