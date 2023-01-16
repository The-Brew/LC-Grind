#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*Here xo be the bitwise xor of all the numbers in the
         range [0,9] and all the elements of the input array.
          We can easily observe that all the elements except the missing number*/
        int n = nums.size(),xo = n;
        for(int i=0;i<n;i++){
            xo^=i;
            xo^=nums[i];
        } /*xo will store the missing number as our answer when we take bitwise xor of all numbers in the range [0,n]
         and all the elements of the input array.*/
        return xo;
    }
};
// T.C: 0(n)
//S.C: o(1)