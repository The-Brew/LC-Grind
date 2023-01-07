/*Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 
Example 1:
Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
Example 2:
Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
 
Constraints:
1 <= n <= 150 */
//*****************           *****************          ********************
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 1;
        if(n%2 == 0) return n;  // here i check if n modulu 2 is equal to 0 then return n.
        else
        {
            ans = n*2; // else the ans is equal to n*2.
        }
        return ans ;
    }
};

//Time Complexity: O(1)  
//Space Complexity: O(1) 