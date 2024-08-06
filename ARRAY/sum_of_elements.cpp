#include<iostream>
#include <limits>
using namespace std;

int sumElement(int arr[], int size)
{ 
    int sum = 0;
    for(int i=0;i<size;i++)
    {
       sum=sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
     cout<<"enter the values of n";
     cin>>n;

   int arr[n];
   cout<<"enter the values for array";
  
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cin>>arr[i];
    }

     
    int sum=sumElement(arr,n);
    cout<<"sum of all element of array :"<<sum<<"\n";
   



}