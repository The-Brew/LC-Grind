#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        /*
        First I Traverse through the array.
         When i see an element x for the first time, 
         I’ll negate the value at the index abs(x)-1.
        */
        for(int i=0;i<n;i++){

            /*
             Here I see an element,No need to negate it again,
              If the value at the index abs(x)-1 is already negative, 
              we know that we’ve seen element x before.
            */
            if(nums[abs(nums[i])-1] < 0) ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1] = -1*nums[abs(nums[i])-1];
        }
        return ans;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)