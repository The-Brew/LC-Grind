#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
           int n=temperatures.size();
         vector<int>ans(n,0);
         stack<int>st;

         /*
         If the stack is not empty, then i store the index presently at the top of the stack 
         in a variable index. If the temperature on the ith  day is strictly 
         greater than that at the index'th day, then i will update the ans[i] with index-i days as 
         I have found a temperature higher than the current day.
         */
         for(int i=0;i<n;i++)
         {
             while(!st.empty() && temperatures[i]>temperatures[st.top()])
             {
                 int index=st.top();
                 st.pop();
                 ans[index]=i-index;
             }
             // I push the current iteration i into the stack.
             st.push(i);
         }
         return ans;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)
