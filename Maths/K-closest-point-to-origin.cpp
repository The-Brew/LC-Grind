#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> q;
        /*
        All the coordinates;
        First i calculate the euclidean distance of the current point from the origin.
        */
        for(auto& point:points){
            int x = point[0],y = point[1];
            int d = x*x + y*y;
            /*
           Then Push the distance along with coordinates in the priority queue (max heap).
            */
            q.push({d,x,y});
            /*
            If the size of the priority queue exceeds the value of k,I pop out the coordinate
             with maximum euclidean distance from the origin and
             that coordinate will be present at the top of the priority queue
            */
            if(q.size()>k){
                q.pop();
            }
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back({q.top()[1],q.top()[2]});
            q.pop();
        } // Left with k closest point in p.q.
        return ans;
        
    }
};

//Time complexity: O(NlogK)
//Space complexity: O(K)