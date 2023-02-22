
#include <bits/stdc++.h>
using namespace std;
void permutation(vector<int> &nums, int i, int &numsSize, vector<vector<int>> &answer){
    if(i == numsSize){
        answer.push_back(nums);
    }
    for(int j = i; j < numsSize; j++){
        swap(nums[i], nums[j]);
        permutation(nums, i+1, numsSize, answer);
        swap(nums[i], nums[j]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> answer;
    int numsSize = nums.size();
    permutation(nums, 0, numsSize, answer);
    return answer;
}

//Time complexity: O(P(N,K))
//Space complexity: O(N!)

