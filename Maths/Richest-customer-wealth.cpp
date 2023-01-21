#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; 
        int rows = accounts.size(); //for row
        int cols = accounts[0].size();// for column

        //  I simply keep traversing each rows and columns.
        for(int i = 0; i < rows; i++) {
            int wealth = 0;
            for(int j = 0; j < cols; j++) {  
                wealth += accounts[i][j];
            }
            //for every row the sum I am getting i keep comparing to get the maximum value.
            maxWealth = max(maxWealth, wealth);
        }
        return maxWealth; // return maximum value.
    }
};

//T C — O(r*c)
//S C — O(1)

