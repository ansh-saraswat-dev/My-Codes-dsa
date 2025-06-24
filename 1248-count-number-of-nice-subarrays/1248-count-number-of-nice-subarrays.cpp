class Solution {
    int atMost(vector<int>& nums, int k) {
        int beg = 0, end = 0, res = 0, odd = 0;

        while (end < nums.size()) {  // ✅ process whole array
            if (nums[end] % 2) odd++;

            while (odd > k) {
                if (nums[beg++] % 2) odd--;
            }

            res += (end - beg + 1);
            end++;
        }
        return res;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);  // ✅ corrected return
    }
};
