#include<iostream>
using namespace std;

void swap_alternate(int array[], int size)
{
   for(int i =0; i<size; i=i+2)
   {
    if((i+1) < size)
      swap(array[i],array[i+1]);
   }
       
}
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << array[i] <<" ";
    }
    cout<<endl;
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
    printArray(arr,n);
    swap_alternate(arr,n);
    printArray(arr,n);
    

     return 0;

}