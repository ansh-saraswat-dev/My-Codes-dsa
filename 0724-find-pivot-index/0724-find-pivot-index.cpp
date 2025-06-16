class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int leftsum=0;
        int rightsum=0;

        for(int i=0;i<nums.size();i++){
            // rightsum = sum-leftsum-nums[i];    
            if (leftsum == sum - leftsum - nums[i]) {
            return i;
        }
        leftsum=leftsum + nums[i];
        }
    return -1;
    }
};