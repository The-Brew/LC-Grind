#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
 /* Create a variable maximum which will 
 store the updated maximum consecutive 1s during traversing */
          int maximum=0;
    //Create and initialize a variable i with first index
    int i=0;
    //Run a while loop until i < array size
    while(i<nums.size())
    {
        int conOnes=0;
        /*
Inside the loop we will check if number at current index i is 1 or not.
If it is not equal to 1 then simply increment the index i.
Else if it is equal to 1, then run a nested while loop by 
creating a count variable and initialize with 0.
        */
        while(i< nums.size() && nums[i]==1)
        {
            conOnes++;
            i++;
        }
        maximum=max(maximum,conOnes);
        i++;
    }
    return maximum; 
    }
};

 // Time complexity : O(N)
 // Space complexity : O(1)