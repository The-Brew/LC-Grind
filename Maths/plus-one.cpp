#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Start with LSB and then process each digit till Most significant bit.
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            /*
            If the current digit is smaller than 9 then add one to
             the current digit and return the array otherwise assign zero to the current digit.
            */
            if(digits[i]<9)
            {digits[i]++ ; return digits;} 
            else
                digits[i]=0;
        }
           /*
            If the last element is processed and it was also equal to 9, 
            it means that all the digits were 9.
             I will increase the size of the array by one and assign 1 to the MSB.
            */
        vector<int>newnumber(n+1,0);
        newnumber[0]=1;
        // Return array.
        return newnumber;
    }
};

//Time compleity : O(n)
//Space complexity :O(1)
