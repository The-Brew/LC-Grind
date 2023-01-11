#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1,end=num; //start point will be 1
        /*Endpoint will be num because the square of any number
         greater than num will be always greater than num*/
        while(start<=end)
        {
            long long int mid=start+(end-start)/2;
            /*we will find the square of mid. If the square is equal to num then we will return true else:
if the square is greater than num then our endpoint will reduce to mid-1.
else start point will become mid+1.*/
            if(mid*mid==num)
                return true;
            else if(mid*mid>num)
             end=mid-1;
            else
                start=mid+1;
        }
        /*if num does not match with any square of number then we will return false*/
        return false;
    }
int main() 
{ 
 int num=14;
 cout<<boolalpha;
 cout<<isPerfectSquare(num)<<endl; 
 return 0;
        
    }
};

//T.C-O(logn)
//s.c-O(1)