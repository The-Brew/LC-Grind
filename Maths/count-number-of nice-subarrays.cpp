#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& A, int k) {
        int N = A.size(), cnt = 0, ans = 0;
        unordered_map<int, int> m{ {0,-1} };
        for (int i = 0; i < N; ++i) {
            cnt += A[i] % 2;
            if (m.count(cnt) == 0) m[cnt] = i;
            if (cnt >= k) ans += m[cnt - k + 1] - m[cnt - k];
        }
        return ans;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)