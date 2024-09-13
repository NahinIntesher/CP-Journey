/* 
Problem Link: 
https://leetcode.com/problems/valid-palindrome/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMyChar(char c) {
        if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            return true;
        } else {
            return false;
        }
    } 
    bool isPalindrome(string s) {
        string str;
        for(int i = 0; i < s.size(); i++){
            if(isMyChar(s[i])){
                str += tolower(s[i]);
            }
        }
        string rev_str = str;
        reverse(str.begin(),str.end());
        cout << str;
        if(str == rev_str)
            return true;
        return false;             
    }
};