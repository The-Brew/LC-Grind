#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x >= 2147483647 || x<= -2147483648) return 0;
        int dig=0, count=0;
        int sum=0,flag=0;
        if(x<0) flag=1;
        int a=abs(x);
        long long int num2=0;
        while (a) {
            int rem = a%10;
            a=a/10;
            if((long long)(num2*10+rem) >=2147483648 && flag == 1) return 0;
            if((long long)(num2*10+rem) >=2147483648 && flag != 1) return 0;
            num2=num2*10+rem;
        }
        if(flag==1){
            return -num2;
        }
        return num2;
        
    }
};