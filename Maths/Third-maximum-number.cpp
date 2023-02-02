#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //I Initialize a set to store maximum integers.
        set <int> maxElements;
    for(int &element : nums)
    /*
    For every element in the array
Add it to the set If the size of the set exceeds 3
Erase/Remove the least element in the set.
    */
    {
        maxElements.insert(element);
        if(maxElements.size() > 3)
            maxElements.erase(*maxElements.begin());
    }
    /*
    If the size of the set is equal to 3
return the least element from it
    */
    if(maxElements.size() == 3)
        return *maxElements.begin();
        /*Return the maximum element in it*/
    return *prev(maxElements.end());
} 
};

//Time Complexity: O(N)  
//Space Complexity: O(1) 