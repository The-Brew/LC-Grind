#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
    int sum=0;
    //Initialise i=0 and j=0.
    int i=0,j=0;
    //Run a loop while i<n and j<n.
    while(i<n)
    {
        sum+=mat[i][j];
        i++;
        j++;
    }
    //Initialise i=0 and j=n-1.
    i=0;
    j=n-1;
    // Run a loop while i<n and j>=0.
    while(i<n)
    {
        //Add the current element ( if it does not lie on primary diagonal, ie. i==j ).
        // Increment i by 1 and decrement j by 1.
        if(i!=j)   sum+=mat[i][j];
        i++;
        j--;
    }
    //Return the sum
    return sum;
        
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)