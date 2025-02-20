/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i <= 30; i++)
        {
            int ans= pow(2,i);
            if (ans==n)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

