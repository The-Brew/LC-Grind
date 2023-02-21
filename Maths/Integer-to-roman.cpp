#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        /*
        I create two arrays one which stores the integral value 
        corresponding to each roman numeral. The other array stores the
         roman numerals. Both of these arrays store the integers and 
        roman numbers at same corresponding indices
        */
            vector<string> romans({"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"});
    vector<int> value({1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000});
    int seqSize = romans.size();
    //Subtract the current number until the given integer is greater than the current number. 
    int idx = seqSize - 1;

    /* when the current number is smaller than the current integer value. 
    Simply check for the next smaller roman numeral.
     Once we are done with all the roman numeral.
    */
    string ans = "";
    while(num>0){
        while(value[idx]<=num){
            ans += romans[idx];
            num -= value[idx];
        }
        idx--;
    }
    //Return the answer.
    return ans;
    }
};


//Time Complexity: O(1)
//Space Complexity : O(1)