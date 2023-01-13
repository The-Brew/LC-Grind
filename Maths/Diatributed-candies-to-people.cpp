#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> arr(num_people, 0); // Here i initialise vector of length 'num_people' with 0
        int i = 0, count = 1; /* initialise array with 0 and count as 1
         of candies being given to person*/
        
        // i running a while loop until we have no candy left.
        while (candies) {
            // if candies are more than what we need to give to person
            if (candies >= count) {
                arr[i] += count;
                candies -= count;
            }
            
            else 
            {
                arr[i] += candies;
                candies -= candies;
            }
            // increment the values
            count++;
            i++;
            
            // if i reach end of the list but candies are left, start over.
            if (i == num_people && candies) {
                i = 0;
            }
        }
        return arr;
    }
};

//Time complexity: O(n)
//Space complexity: O(n)