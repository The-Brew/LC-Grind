/*Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.
A subarray is a contiguous subsequence of the array.
 
Example 1:
Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
Example 2:
Input: arr = [1,2]
Output: 3
Explanation: There are only 2 subarrays of odd length, [1] and [2]. Their sum is 3.
Example 3:
Input: arr = [10,11,12]
Output: 66
 
Constraints:
1 <= arr.length <= 100
1 <= arr[i] <= 1000 */

//*********************      *****************      *****************


#include <bits/stdc++.h>
using namespace std;
//class Solution {
//public:
int sumOddLengthSubarrays(vector<int>& arr) 
{
    int sum=0;        // variable sum
    int n=arr.size();   // store total sum in n.
    for(int len=1;len<=n;len+=2)    /*loop for add all odd subarrays starting from  lenght=1
    and keep inc the value by 2 while lenght<= sixe of the actual array */
    /*and keep inc the value by 2 while lenght<= size of the actual array */

        for(int i=0;i<n-len+1;i++)  /* this loop start from subarray fom i=0
        to i=n-length */
            for(int j=i;j<i+len;j++) /* this loop for start the index from i and end
            at i+lenght-1 and add all the elements of the sub array*/
                sum+=arr[j];
    
    return sum; // return the sum.
}
int main() 
{
    vector<int> arr = {1,4,2,5,3};
  
  cout<<sumOddLengthSubarrays(arr)<<endl;
  return 0; 

}

//T.c : O(n^3)
//S.c :O(1)
