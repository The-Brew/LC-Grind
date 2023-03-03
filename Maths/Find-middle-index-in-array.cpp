#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& A) {
        int right = accumulate(begin(A), end(A), 0), N = A.size(), left = 0;
        for (int i = 0; i < N; ++i) {
            if (i - 1 >= 0) left += A[i - 1];
            right -= A[i];
            if (left == right) return i;
        }
        return -1;
    }
};

//Time complexity:O(N)
//Space complexity:O(1)