#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        //Loop over a, b and c and i count the number of square triples.
        for (int a = 1; a < n; ++a) {
            for (int b = 1; b < n; ++b) {
                int count_squ = a * a + b * b, c = sqrt(count_squ);
                if (c > n) break;
                if (c * c == count_squ) ++ans;
            }
        }
        return ans;
    }
};

// Time complexity : O(N^2)
// Space complexity :  O(1)