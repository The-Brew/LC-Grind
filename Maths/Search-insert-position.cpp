#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
         int n = a.size();
         //Run a loop from first index to the end of the array
    for(int i = 0 ; i < n ; i++)
    {
        //If array[i] exceeds or equals target value, then return i
        if(a[i] >= target)
            return i;
    }
    /*Return n, as i found no index such that array[index] >= target, 
    so target should be inserted in the end*/
    return n;
    }
};

//Time Complexity: O(N)  
//Space Complexity: O(1) 
