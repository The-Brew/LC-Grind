/*There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.
For each location indices[i], do both of the following:
Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in 
indices.*/

//*******************       **********************           ********************

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<bool> N(n, false);
        vector<bool> M(m, false);
        // using for loop to increment to all locationsin the indices;
        for(int i=0; i<indices.size(); i++) {
            N[indices[i][0]] = N[indices[i][0]]^true;
            M[indices[i][1]] = M[indices[i][1]]^true;
        }
        
        int r = 0;
        int c = 0;
        
        // using for loop to increment the every indices in the row;
        for(int i=0; i<n; i++) {
            if(N[i])
                r++;
        }
        
        // using for loop to increment the every indices in the coloum;
        for(int j=0; j<m; j++) {
            if(M[j])
                c++;
        }
        //return odd value.
        return  r*m + c*n - 2*r*c;
    }
};

//Time Complexity : O(L + m + n)

//Space Complexity : O(m + n), where L = indices.length.