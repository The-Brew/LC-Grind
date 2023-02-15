#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
           unordered_map<int,bool>mp;
           // First Traverse the array.
        for(int i=0;i<arr.size();i++)
        {
            // For every element in the array  I check if it’s double or its half already exists it the map.
            if(mp[arr[i]*2]==1||(mp[arr[i]/2]==1&&arr[i]%2==0))
            //If the condition is true simply return true else add that element into the map.
                return true;
            mp[arr[i]]=1;
        }
        //If array traversal is done and we didn’t find double of any element, then return false.
        return false;
    } 
};

//Time Complexity: O(n)
//Space Complexity : O(n)