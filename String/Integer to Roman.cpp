//Link: https://leetcode.com/problems/integer-to-roman/description/

class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i=0; i<13; i++) {
            while(num >= nums[i]) {
                ans += romans[i];
                num -= nums[i];
            }
        }
        return ans;
    }
};
