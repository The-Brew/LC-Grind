#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    double area (vector<int> &a, vector<int> &b, vector<int> &c) {
        return .5 * abs(a[0]*b[1] + b[0]*c[1] + c[0]*a[1]  //abs is a absolute value of 
        //all the three points
                       -a[1]*b[0] - b[1]*c[0] - c[1]*a[0]);
    }
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0;
        /*We can use the sum of area method formula directly,
         which tells us the area given the 3 points;
We can use Heron's formula, which requires the 3 side lengths
 which we can get by taking the distance of two points;
We can use the formula area = 0.5 * a * b * sin(C) and
 calculate the angle C with trigonometry.*/
        for (int i = 0, N = points.size(); i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                for (int k = j + 1; k < N; ++k) {
                    ans = max(ans, area(points[i], points[j], points[k]));
                }
            }
        }
        return ans;
    }
};