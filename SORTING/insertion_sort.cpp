#include<iostream>
using namespace std;
void insertion_sort(int arr[] , int size);
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

    insertion_sort(array,n);

    printArray(array,n);
   
   return 0;

}

 void insertion_sort(int arr[] , int size)
    {
           
            for(int i = 1;i<size;i++)
              {  
                int temp = arr[i];
                int j=i-1;
                for(; j>=0 ; j--)
                {
                       if(arr[j]>temp)
                       { //shift
                        arr[j+1]=arr[j];
                       }
                       else
                       {
                        break;
                       }
                     
                }
                arr[j+1]=temp;
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