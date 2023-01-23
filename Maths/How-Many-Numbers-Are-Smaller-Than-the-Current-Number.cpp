#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int val;
        /*i run a loop for every element, starting from left to right,For each element,
 we will find the count of the elements
  which are lesser than the current number.*/
        for(int i=0;i<nums.size();i++)
        {
            val = 0; /* i run one outer loop for each element and in inner loop ,
            For every element, I will traverse the whole array once
             to find elements satisfying the condition*/
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i] && j!=i)
                    val++;
            }
            /* Here I  push back the total count for each element satisfying the condition*/
            ans.push_back(val);
        }
        return ans;
    }
};
//Time Complexity: O(n^2)
//Space Complexity: O(n)
