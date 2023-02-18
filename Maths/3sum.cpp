#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        if(nums.size() < 3) return ans;
        // First i Sort the input array.
        sort(nums.begin(), nums.end());
        // Second i Iterate over the input array to fix the value of ‘a’.
        for(int i = 0; i < nums.size()-2; i++){            
            
            if(i == 0 || nums[i-1] != nums[i]){
                // Here i Take two pointers, one(low) at i + 1 and the other(high) at n – 1.
                int low = i+1, high = nums.size()-1, sum = -nums[i];
                
                while(low < high){
                
                    if(nums[low] + nums[high] == sum){
                        
                        ans.push_back({nums[i], nums[low], nums[high]});
                        
                        while(low < high && nums[low] == nums[low+1])
                         low++;
                                               
                          while(low < high && nums[high] == nums[high-1])  
                         high--;
                          low++;
                          high--;
                      }
                      
                      else if(nums[low] + nums[high] < sum){
                          low++;
                      }
                      else{
                          high--;
                      }
                  }                
              }
          }
          //Return  answer.
          return ans;
      }
  };

  //Time complexity:O(N^2)
//Space complexity:O(1)