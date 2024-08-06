#include<iostream>
using namespace std;

void reverse_array(int array[], int size)
{
    int start = 0;
    int end = size-1;

    while(start <= end)
    {
         swap(array[start],array[end]);
         start++;
         end--;
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
     reverse_array(arr,n);
     printArray(arr,n);
    

     return 0;

}