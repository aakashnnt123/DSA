
#include<iostream>
using namespace std;
void selection_sort(int arr[] , int size);
void unsortedArray(int arr[],int size);
void printArray(int arr[] , int size);
int main(){
    
    int n;
    cout<<"size of array";
    cin>>n;
    int array[n];
    
    cout<<"enter the number";
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
    }

    unsortedArray(array,n);

    selection_sort(array,n);

    printArray(array,n);
   
   return 0;

}

 void selection_sort(int arr[] , int size)
    {
           
            for(int i = 0;i<size-1;i++)
              {
                  int min = i;
                for(int j=i+1;j<size;j++)
                {
                    if(arr[j]<arr[min])
                    {
                        min = j;
                    }
                }
                swap(arr[min],arr[i]);
              }
    }

void unsortedArray(int arr[], int size)
{
    int i;
    cout<<"unsorted array:";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
       
    }
     cout<<endl;
}

void printArray(int arr[], int size)
{
    int i;
    cout<<"sorted array";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
       
    }
}