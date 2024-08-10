#include<iostream>
using namespace std;

int firstOc(int arr[], int n, int k) {

    int s = 0, e = n - 1;

    int ans = -1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {

            ans = mid;

            e = mid - 1;

        } else if (k < arr[mid])

            e = mid - 1;

        else

            s = mid + 1;

    }

    return ans;

}

 

int lastOc( int arr[], int n, int k) {

    int s = 0, e = n - 1;

    int ans = -1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {

            ans = mid;

            s = mid + 1; 

        } else if (k < arr[mid])

            e = mid - 1;

        else

            s = mid + 1;

    }

    return ans;

}

 

int main() {
    int arr[10]={0,1,2,2,2,3,3,3,4,5};
    int k=3;

    int first=firstOc(arr, 10, k);
    int last=lastOc(arr, 10, k);
    cout<<"first occ ="<<first<<"\n";
    cout<<"last occ ="<<last<<"\n";


    // pair<int,int>p;
    // p.first=firstOc(arr,  n,  k);
    // p.second=lastOc(arr,  n,  k);

    // return p;


}