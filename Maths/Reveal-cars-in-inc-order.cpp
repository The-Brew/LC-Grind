#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
         vector<int> res;
         // First i sort the given array in decreasing order.
        sort(deck.begin(), deck.end());
        reverse(deck.begin(), deck.end());
        /*
         I take a deque to arrange the cards in such a way so that when 
         i reveal them they are all in increasing order and a result vector
          to store the final.
        */
        deque<int> dq;
        /*
         First, i push the largest element of the given array in the deque from the back.
        */
        dq.push_back(deck[0]);
        /*
         Here i  iterate in the array, pop the last element from the deque, 
        and push it in the front of the deque,
         after that push the array element in the front of the deque.
        */

        for (int i = 1; i < deck.size(); i++) {
            dq.push_front(dq.back());
            dq.pop_back();
            dq.push_front(deck[i]);
        }
        while(!dq.empty()){
            /*
            I take the front elements of the deque and push them into our result vector one by one.
            */
            int value=dq.front();
            dq.pop_front();
            res.push_back(value);
        }
        // Return vector.
        return res;
    }
};

//Time compleity : O(NlogN)
//Space complexity :O(2N)
