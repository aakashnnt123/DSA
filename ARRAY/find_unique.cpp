#include<iostream>
using namespace std;

int find_unique(int array[], int size)
{ 
    int ans =0;
    for(int i=0;i<size;i++)
    {
        ans=ans^array[i];
    }
    return ans;
}


int main()
{
    int n;
     cout<<"Enter the values of n : ";
     cin>>n;

   int arr[n];
   cout<<"Enter the values for array : ";
  
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cin>>arr[i];
    }
   
    int unique = find_unique(arr,n);
    cout<<"unique number ="<<unique;
     
    

     return 0;

}