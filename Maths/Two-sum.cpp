#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector <int> targetSum(vector <int> &a , int &target)
{
    int left = 0 , right = int(a.size()) - 1 , tempSum;
    while(left < right)
    {
        tempSum = a[left] + a[right];
        if(tempSum == target)
            return {left + 1 , right + 1};
        if(tempSum > target)
            right--;
        else
            left++;
    }
    return {-1 , -1};

}
};

//Time complexity : O(N) 
//Space complexity : O(1)