#include<iostream>
#include <limits>
using namespace std;

bool linear_search(int array[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]==key)
        return 1;
        
       
    }
     return 0;
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
    int key;
    cout<<"Enter the key value : "  ;
    cin>>key;

     bool found=linear_search(arr,n,key);

     if(found)
     {
        cout<<"key is present"<<endl;
     }
     else
       cout<<"key is not present"<<endl;

     return 0;
}