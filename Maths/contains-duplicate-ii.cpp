#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //Create a Hash Set for storing k previous elements.
    unordered_set<int> set;
    //Traverse for every element nums[i] of the given array in a loop.
    for(int i=0;i<nums.size();i++)
    {
        /*
        Check if hash set already contains nums[i] or not. 
        If nums[i] is present in the set ( i.e. duplicate element is present
        at distance less than equal to k ), 
        then return true. Else add nums[i] to the set.
        */
        if(set.count(nums[i])) return true;
        set.insert(nums[i]);

        /*
        If size of the set becomes greater than k then remove the last
        visited element (nums[i-k]) 
        from the set.
        */
        if(set.size()>k)
            set.erase(nums[i-k]);
    }
    // No duplicate element is found then return false.
    return false;
    }
};

//Time Complexity: O(N)
//Space Complexity: O(min(k,n))