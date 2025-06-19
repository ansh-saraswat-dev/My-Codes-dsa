class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal=*max_element(nums.begin(),nums.end());
        int count=0,ans=0;
        for(int i : nums){
            if(i==maxVal){
                count++;
            }
            else{
                count=0;
            }
            ans=max(ans,count);
        }
return ans;
    }
};