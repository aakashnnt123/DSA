#include<iostream>
using namespace std;
void Bubble_sort(int arr[] , int size);
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

    Bubble_sort(array,n);

    printArray(array,n);
   
   return 0;

}

 void Bubble_sort(int arr[] , int size)
    {
           
            for(int i = 1;i<size;i++)
              {  bool swapped = false;
                 for(int j=0;j<size-i;j++)
                  {
                    if(arr[j]>arr[j+1])
                    {
                       swap(arr[j],arr[j+1]);
                       swapped = true;
                    }
                       
                  }
                  if(swapped == false)
                  break;
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