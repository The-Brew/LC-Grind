#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        set<int> s;
        for (int i = 1; i <= n; ++i) {
            s.insert(i);
        }
        auto it = begin(s);
        while (s.size() > 1) {
            for (int i = 1; i < k; ++i) {
                it = it == prev(s.end()) ? begin(s) : next(it);
            }
            auto j = it == prev(s.end()) ? begin(s) : next(it);
            s.erase(it);
            it = j;
        }
        return *s.begin();
    }
};

// time complexity : O(NK)
// space complexity : O(N)

