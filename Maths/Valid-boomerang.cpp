#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        /*
       I Initialize dx1 = difference of x-coordinates of the first two points and
         dy1 = difference of y-coordinates of first two points
        */
         int dx1 = (points[1][0] - points[0][0]);
    int dy1 = (points[1][1] - points[0][1]);
    /* I store dx2 = difference of y-coordinates of the last two points and
     dy2 = difference of y-coordinates of last two points
    */
    int dx2 = (points[2][0] - points[1][0]);
    int dy2 = (points[2][1] - points[1][1]);
    /*  Return if ((dx1 * dy2)!= (dx2 * dy1))
    */
    return (dx1 * dy2) != (dy1 * dx2);
    //Return result
    }
};
//Time complexity : O(1) 
//Space complexity : O(1)
