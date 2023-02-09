#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
       int m=matrix.size();
         vector<int>res;
          if(m==0)
          return res;
        int n=matrix[0].size();
        //I Create and initialize variables like rowstart, rowend,colstart, and colend.
        
        int rowstart=0;
        int rowend=m;   /*Rowstart and colstart represent the initial position of
         row and column respectively which initializes to zero */
        int colstart=0;
        int colend=n;
        
        int k;
        /*
        Run an outer while loop until all the elements will be printed and elements
         will be printed in a clockwise direction & in a spiral manner.
        */
        while(rowstart<rowend && colstart<colend)
        {
          
            for(k=colstart;k<colend;k++)
            res.push_back(matrix[rowstart][k]);
            rowstart+=1;
            
            for(k=rowstart;k<rowend;k++)
            res.push_back(matrix[k][colend-1]);
            colend-=1;
              /*
            In each iteration of the outer loop, we traverse four inner loops which traverse 
            from left to right, then traverse the last column from top to bottom,
             then traverse from right to left and the last inner loop traverse from bottom to top.
            */
          
            if(rowstart<rowend)
            {
                for(k=colend-1;k>=colstart;k--)
                res.push_back(matrix[rowend-1][k]);
                rowend-=1;
            }
            
            if(colstart<colend)
            {
                for(k=rowend-1;k>=rowstart;k--)
                res.push_back(matrix[k][colstart]);
                colstart+=1;
            }
            
        }
        return res;       
    }
};

//Time Complexity: O(m*n)
//Space Complexity : O(1)