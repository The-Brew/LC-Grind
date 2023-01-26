#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int maxContainerWater(int height[], int n) 
{
    //i initialize a variable maxArea to track the max area between pairs of lines.
    int maxArea = 0;
    for (int i = 0; i < n; i = i + 1) 
    {
        /*i run a nested loop to consider each pair of lines:
         the outer loop from i = 0 to n - 1 and the inner loop from j = i to n - 1 */
        for (int j = i; j < n; j = j + 1) 
        {
            /*i calculate the area using the below formula for every pair of lines i and j 
            and store it in a temporary variable currArea.
             If currArea > maxArea, i update the maxArea ;; maxArea = max (maxArea, currArea)
            */
            int currArea = (j - i) * min(height[i], height[j]);
            maxArea = max(maxArea, currArea);
        }
    }
    //i return the value stored in the variable maxArea
    return maxArea;
}
};

// time complexity : o(n)
// space complexity : o(1)