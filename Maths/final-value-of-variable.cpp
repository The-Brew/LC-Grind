#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int x =0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X" ||operations[i]=="X--" )
                x = x-1;
            else if(operations[i]=="++X" ||operations[i]=="X++")
                x = x+1;
            else
                continue;
        }
        return x;
    }
};

//Time Complexity: O(n)
//Space Complexity : O(1)