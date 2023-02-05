#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(auto &row: image) {
            for(int i=0; i<(n+1)/2; i++) {
                int temp = row[i];
                row[i] = row[n-1-i]^1;
                row[n-1-i] = temp^1;
            }
        }
        return image;
        
    }
};

// Time complexity : O(N)
// Space complexity :  O(1)