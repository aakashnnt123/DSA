#include<bits/stdc++.h>
using namespace std;



void repeated_ele(vector<int>arr)
{
   

   unordered_map<int,int> hashMap;

    for(auto i:arr) ++hashMap[i];
    // if the count of elements equals to 1, it is a non-repeating element.
    for(auto pairInMap:hashMap) 
        if(pairInMap.second == 1) cout<<pairInMap.first<<" ";
}

int main()
{
  vector<int>arr = {1,2,-1,1,3,1};
  repeated_ele(arr);

}