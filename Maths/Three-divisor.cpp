class Solution {
public:
    bool isThree(int n) { // n must be a perfect square number
        int ans = 0;
        for (int i = 1; i <= n && ans <= 3; ++i) {  /*loop over all integers from 1 to the square
         root of 1.For each i such that n is divisible by i, add 2 to the number of divisors*/
            if (n % i == 0) ++ans;//if the number of divisors equals 3.
        }
        return ans == 3; // return ans
    }
};
// Time: O(N)
// Space: O(1)