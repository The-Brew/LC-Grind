#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

        //If the dividend is INT_MIN, and the divisor is 1, the answer is INT_MIN.
        if(dividend==INT_MIN and divisor==1){
            return INT_MIN;
        }
        // If the dividend is INT_MIN, and the divisor is -1, the answer is INT_MAX.
        if(dividend==INT_MIN and divisor==-1){
            return INT_MAX;
        }
        
        if(dividend==INT_MIN and divisor&1){
            return divide(dividend+1,divisor);
        }
        if(dividend==INT_MIN and divisor%2==0){
            return divide(dividend/2,divisor/2);
        }
        //If the divisor is INT_MIN, return 0.
        if(divisor==INT_MIN){
            return 0;
        }
        
        int sign = 1,ans = 0;
        if((dividend>0 and divisor<0) or (dividend<0 and divisor>0)){
            sign = -1;
        }
        
        divisor = abs(divisor);
        dividend = abs(dividend);
        
        while(dividend>=divisor){
            int curr = divisor,shift = 0;
            while(curr<=(INT_MAX)/2 and dividend>=curr*2){
                shift++;
                curr *= 2;
            }
            dividend -= curr;
            ans += (1<<shift);
        }
        
        return ans*sign;
    }
};


//Time Complexity: O(log(N)*log(N))
//Space Complexity: O(1)