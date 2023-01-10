#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x >= 2147483647 || x<= -2147483648) return 0; /*here i am checking 
        for both positive and negative number which i am taking here 
        you can take any random number a/c to your own. */
        int dig=0, count=0; // here i initalise a digit with 0;
        int sum=0,flag=0;  // here i initalise the sum with 0;
        if(x<0) flag=1;  
        int a=abs(x);  // here i am taking a absolute value of x and store in to the a variable.
        long long int num2=0;
        while (a) {      /* here i am using 
        while loop Divide the number repeatedly by 10 until the number becomes zero*/
            int rem = a%10;
            a=a/10;
            /*after loop check i put the condition to check if
            the output is equal to 1 or not*/
            if((long long)(num2*10+rem) >=2147483648 && flag == 1) return 0;
            if((long long)(num2*10+rem) >=2147483648 && flag != 1) return 0;
            num2=num2*10+rem;
        }
        //Return the output with the correct sign (positive or negative).
        if(flag==1){
            return -num2;
        }
        return num2;
        
    }
};
//Time Complexity: O(log10n).
//Space Complexity:O(1).
