#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        int max = 0;               // Initialize maximum element.

        // Traverse array element to find the highest number 
        for(int i = 0;i<n;i++){
            if(candies[i]>max) max = candies[i];
        }
        /*Loop through each element to set output[j] to true or false,
         depending on the sum of candies[j] and extraCandies */
        for(int j = 0; j<n; j++){
            if((candies[j] + extraCandies) >= max) ans.push_back(true);
            else ans.push_back(false);
        }
        // Return the output list
        return ans;
    }
};

//Time Complexity: O(N),N = size of the array. As i traverse the whole array once.
// Space complexity: O(N), As i save the result of every child in a separate array.