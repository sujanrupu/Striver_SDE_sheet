//Link: https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        string str = "";
        for(int i=0; i<nums.size(); i++) {
            str.push_back(char(nums[i]));
        }
        string cpy = str;
        while(next_permutation(str.begin(), str.end())) {
            if(str > cpy) {
                break;
            }
        }
        for(int i=0; i<str.length(); i++) {
            nums[i] = (int)(str[i]);
        }
    }
};
