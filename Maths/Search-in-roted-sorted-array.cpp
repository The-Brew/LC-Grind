#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n = nums.size();
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        // I check if the current element is target
        if(nums[mid] == target)
            return mid;
        // If the starting index of the search space has smaller element than current element
        else if(nums[low]<=nums[mid]){
            // If target lies in non-rotated search space (or subarray)
            if(target >= nums[low] && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            // If target lies in non-rotated subarray
            if(target>nums[mid] && target<=nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    // If i couldn't find the target element until now then it does not exists
    return -1;
    }
};


//Time complexity : O(LogN)
// Dpace complexity : O(1)



