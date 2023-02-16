#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // Sort the array in ascending order.
        int n = costs.size();
        sort(begin(costs),end(costs));
        /*
        Itereate over the array and decrease count by current cost of the array.
        If the cost become less than 0, then return the currrent index.
        */
        for(int i=0;i<n;i++){
    
            coins-=costs[i];

            /*
            Else if the iteration is completed then it is possible to buy all bars.
             So return size of cost array. 
             */

            if(coins<0)
                return i;
            
        }
        return n;
    }
};
 // Time complexity : O(nlogn)
 // Space complexity : O(1)


