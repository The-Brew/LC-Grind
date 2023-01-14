#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i=0; i<n; i++){ //Here i Iterate on the numbers from 1 to n( loop variable is i)
            if((i+1)%3==0 && (i+1)%5==0){ /*For every number, if it is divisible by both 3 and 5;
            i%3=0 and i%5=0, then print “FizzBuzz”.*/
                answer[i] = "FizzBuzz";
            }else if((i+1)%3 == 0){ //Else if the number is divisible by 3; i%3=0, then print “Fizz”.
                answer[i] = "Fizz";
            }else if((i+1)%5 == 0){ //Else if the number is divisible by 5; i%5=0, print “Buzz”.
                answer[i] = "Buzz";
            }else{
                answer[i] = to_string(i+1); //Else print the number as a string.
            }
        }
        return answer; // return ans.
    }
};

//Time complexity::O(n)
//Space Complexity::O(1) 
