#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> ans;
    void recurse(string s,int open,int close,int n){
        if(open==n and close==n){
            ans.push_back(s);
            return;
        }
        if(open<n)
            recurse(s+"(",open+1,close,n);
        if(close<open)
            recurse(s+")",open,close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        recurse("",0,0,n);
        return ans;
    }
};

//Time complexity: O(2^(2N))
//Space complexity: O(N)