#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        /*
         I take two variables capital  and small
          to store the count of the capital letters and the small letters
        */
        int capital=0, small=0;
        /*
         iterate through the string and update the values a/c,
          which means if a capital letter is found then increase the count of the capital variable 
          increase else  the “small” variable.
        */
        for(int i=0;i<word.size();i++){

            /*
            If the length of the given string is equal to any of the variable capital or small
            */
            if(word[i]>='A' && word[i]<='Z'){
                capital++;
            }
            else{
                small++;
            }
        }
        /*
         first check if the first character of the string 
        is a capital letter or not and the length of the remaining string is equal to the
         small variable or not.
        */
        if(capital==word.size() || small==word.size()){
            return true;
        }
        else if(word[0]>='A' && word[0]<='Z' && small==word.size()-1){
            //If both of them are true, return true.
            return true;
        }
        else{
            //return false
            return false;
        }
    }
};

//Time complexity: O(n)
//Space complexity: O(1)