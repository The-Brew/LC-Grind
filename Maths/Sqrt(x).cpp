class Solution {
public:
    int mySqrt(int x) {
        long long int i = 1, result = 1; // here all the natural number starting from 1.


while (result <= x)
{ // We continue increasing the number till the square of the number is greater than x.
    i++;
    result = i * i;
}

return i - 1;
        
    }
};
// time complexity of the above approach is O(√ n),
// since we are running a loop from 1 till the square root of that number.