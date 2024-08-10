#include<iostream>
#include <limits>
using namespace std;

bool Binary_search(int array[],int size,int key)
{
   int start=0;
   int end=size-1;

   while(start<=end)
 {
    int mid = start+(end-start)/2;

   if(key==array[mid])
    return 1;
   if(array[mid]>key)
      end=mid-1;
   else
    start=mid+1;

  mid=start+(end-start)/2;
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

     bool found=Binary_search(arr,n,key);

     if(found)
     {
        cout<<"key is present"<<endl;
     }
     else
       cout<<"key is not present"<<endl;

     return 0;
}