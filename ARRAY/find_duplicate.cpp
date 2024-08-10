#include<iostream>
using namespace std;

int find_duplicate(int array[], int size)
{ 
   int ans=0;
   //XOR ING ALL ARRAY ELEMENT..
   for(int i=0;i<size;i++)
   {
    ans=ans^array[i];
   }
   // XORing of ans with 1 to n-1
   for(int i=1;i<size;i++)
   {
    ans = ans^i;
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
   
    int duplicate = find_duplicate(arr,n);
    cout<<"duplicate number ="<<duplicate;
     
    

     return 0;

}