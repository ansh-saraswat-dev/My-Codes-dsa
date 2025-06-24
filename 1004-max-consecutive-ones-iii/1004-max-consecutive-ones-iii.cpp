class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int beg=0, end=0;
        int flips=0;
        int ans=0;
        while(end<nums.size()){
            if(!nums[end]) flips++;
            while(flips > k){
                if(!nums[beg]) flips--;
                beg++;
            }
            end++;
            ans=max(ans,end-beg);
        }
        return ans;
    }
};