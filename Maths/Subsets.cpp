
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans; //Declare the array of vectors “ans” in which i will store our all subsets.
    for (int i = 0; i < (1 << (nums.size())); i++)  
    //Run a loop for I in range 0 to 2n-1
    {
        //Initialize an array “temp” in which i will store our current subset
        vector<int> temp;
        //Run a loop for j in range 0 to n-1
        for (int j = 0; j < nums.size(); j++)
        {
            //If the jth bit of I is set, then add the nums[i] to the temp array.
            if (i & (1 << j))
            {
                //Add the “temp” array to “ans”
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }
    for (auto x : ans)
    {
        if(x.size()>0)
        cout<<"[";
        for (auto y : x)
        {
            if(y==x[x.size()-1])
            cout << y <<"]";
            else
            cout << y <<", "; 
        }
        cout << endl;
    }
    return 0;
}
// Time complexity :
// Space complexity :
