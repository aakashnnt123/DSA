#include<bits/stdc++.h>
using namespace std;

void remove_duplicate(vector<int>arr){
    map<int,int>mp;

    for (int i = 0; i < arr.size(); i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
}

}

int main()
{
  vector<int>arr ={2,3,1,9,3,1,3,9};
  remove_duplicate(arr);
}