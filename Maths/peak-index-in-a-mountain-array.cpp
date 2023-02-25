#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int peakIndex(int arr[],int high)
{
    int low=0;
    int mid;
    high-=1;
    while( low < high )
    {
        mid = low +(high - low)/2;
        if(arr[mid]>=arr[mid+1])
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
};

 // Time complexity : O(logn)
 // Space complexity : O(1)