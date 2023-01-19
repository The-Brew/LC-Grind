#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Element_sum = 0;
        int Digit_sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            //here i store all the array elements sum
            Element_sum += nums[i];
            
            int n = nums[i], Digit_sum = 0;
            
            // here i store the digit sums of each elemenet of array
            while(n) {
                Digit_sum += n % 10;
                n /= 10;
            }
            Digit_sum += Digit_sum;
        }
        // Return the final  diff between final sum final digit sum
        return abs(Digit_sum - Element_sum);
    }
};

//t.c:o(n)
//s.c:o(1)