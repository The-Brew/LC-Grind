#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string s) {
        int i = s.size() - 1;
        while (i >= 0 && (s[i] - '0') % 2 == 0) --i;
        return s.substr(0, i + 1);
    }
};