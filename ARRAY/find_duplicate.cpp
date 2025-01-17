#include<iostream>
using namespace std;

int find_duplicate(int array[], int size)
{ 
   int ans = 0;
   // XOR all array elements
   for(int i = 0; i < size; i++) {
       ans = ans ^ array[i];
   }
   // XOR the result with numbers from 1 to size-1
   for(int i = 1; i < size; i++) {
       ans = ans ^ i;
   }
   return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n]; // Dynamically sized array
    cout << "Enter the values for the array: ";
  
    for(int i = 0; i < n; i++) { // Use `n` as the size of the array
        cin >> arr[i];
    }
   
    int duplicate = find_duplicate(arr, n);
    cout << "Duplicate number = " << duplicate << endl;

    return 0;
}
