#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n=nums.size();
      
       int count=0,count1=0,count2=0;
       
       for(int i=0;i<n;i++)
       {
           if(nums[i]==0)count++;
           else if(nums[i]==1)count1++;
           else if(nums[i]==2)count2++;
       }
       
       
       for(int i=0;i<n;i++)
       {
           if(count>0)
           {
               nums[i]=0;
               count--;
           }
           else if(count1>0)
           {
               nums[i]=1;
               count1--;
           }
           else
           {
               nums[i]=2;
           }
           
       }
       
       
       return ;
    }
};

//Time Complexity: O(2*N)  
//Space Complexity: O(1) 