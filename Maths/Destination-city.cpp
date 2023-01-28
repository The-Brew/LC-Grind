#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         unordered_map<string, int> outdegree;
         /*
          I keep track of outgoing roads. 
          I traverse the paths vector and increment the number of outgoing roads of the cities. 
         */
    for(auto x: paths){
        outdegree[x[0]]++;
    }
    for(auto x: paths)
    /*
    i check if there is any city among the paths vector, that does not have an outgoing road.
    */
        if(outdegree[x[0]] == 0)
            return x[0];
        else if(outdegree[x[1]] == 0)
            return x[1];
    return paths[0][0];  // Return that city
    }
};
//Time complexity:O(N)

//Space complexity:O(N)