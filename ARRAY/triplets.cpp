#include<iostream>
using namespace std;

void find_triplets(int array[], int size,int target)
{ 
      for(int i=0;i<size;i++)
      {
        for(int j=i+1;j<size;j++)
        {
           for(int k=j+1;k<size;k++) 
           {
            if(array[i]+array[j]+array[k] == target)
             {
                 cout<<"triplet for"<< target <<"is :"<<array[i]<<" "<<array[j]<<" "<<array[k]<<"\n"; 
             }
           }
        }
      }
}


int main()
{
    int n , key;
     cout<<"Enter the values of n and target key: ";
     cin>>n;
     cin>>key;

   int arr[n];
   cout<<"Enter the values for array : ";
  
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cin>>arr[i];
    }
   
    find_triplets(arr,n,key);
    // cout<<"duplicate number ="<<duplicate;
     
    

     return 0;

}