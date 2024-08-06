#include<iostream>
#include <limits>
using namespace std;

int maxElement(int array[],int size)
{
    int max = INT8_MIN;
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
           max=array[i];
    }
    return max;
}
int minElement(int array[],int size)
{
    int min = INT8_MAX;
    for(int i=0;i<size;i++)
    {
        if(array[i]<min)
           min=array[i];
    }
    return min;
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

     
    int max=maxElement(arr,n);
    cout<<"largest element :"<<max<<"\n";
    int min=minElement(arr,n);
    cout<<"smallest element :"<<min<<"\n";



}