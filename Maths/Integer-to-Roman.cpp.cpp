#include <bits/stdc++.h>
using namespace std;

class Solution {
    public int findPeakElement(int[] nums) {
        int low = 0;
        int high = nums.length-1;
        
        while(low < high){
            
            int mid = (low+high)/2;
            if(nums[mid] > nums[mid+1]){
                
                high = mid;
                
                
            }
            else
                low = mid+1;
            
            
        }
        return low;
        
        
    }
}

//Time Complexity: O(LogN)
//Space Complexity : O(1)
