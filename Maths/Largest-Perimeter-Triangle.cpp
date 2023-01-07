/*Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

 

Example 1:

Input: nums = [2,1,2]
Output: 5
Explanation: You can form a triangle with three side lengths: 1, 2, and 2.
Example 2:

Input: nums = [1,2,1,10]
Output: 0
Explanation: 
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.
 

Constraints:

3 <= nums.length <= 104
1 <= nums[i] <= 106 */


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
	// sort the elements 
        sort(nums.begin(),nums.end());
		// iterate in everse order to get maximum perimeter
        for (int i=nums.size()-2; i>=1 ; i--){
		//Triangle is formed if sum of two sides is greater than third side
        if (nums[i]+nums[i-1] >nums[i+1])return (nums[i]+nums[i+1]+nums[i-1]); // return perimeter which is sum of three sides
        }
        return 0; // when no triangle possible it will come out of loop so return 0 here
        
    }
};

// Time complexity : O(nlogn)
