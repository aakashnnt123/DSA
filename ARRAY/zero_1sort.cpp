#include<iostream>
using namespace std;
void ZeroOne_sort(int arr[] , int size);

int main(){
    
    
int array[6]={1,1,0,0,0,1};
ZeroOne_sort(array,6);
for(int i=0;i<6;i++)
{
    cout<<array[i]<<" ";
}
return 0;

}

 void ZeroOne_sort(int arr[] , int size)
    {
        int left=0;
        int right=size-1;

        while(left< right)
        {
            while(arr[left]==0)
            {
                left++;
            }
            while(arr[right]==1)
            {
                right--;
            }
            // if((arr[left] == 1 && arr[right] == 0)||(arr[left] == 0 &&  arr[right] == 1)){
            //     swap(arr[left],arr[right]);
            //     left++;
            //     right--;
            // }
            if(arr[left] == 1 && arr[right] == 0){
                 swap(arr[left],arr[right]);
            }
            left++;
            right--;
            
        }

    }

