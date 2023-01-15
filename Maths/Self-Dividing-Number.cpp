#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int num = left; num <= right; num++){
            bool selfDividing = true;
            int workingNum = num; // store the number in working num variable.
            while(workingNum){
                //check if n-th digit is 0 or n-th digit of "num" then cannot divide "num"
                if(workingNum%10==0 || num%(workingNum%10)!=0){
                    selfDividing = false;
                    break;
                }
                //check if workNum<10, thenthere won't be next iteration
                workingNum/=10;
            }
            if(selfDividing) result.push_back(num);
        }
        return result; // return resul.
    }
};