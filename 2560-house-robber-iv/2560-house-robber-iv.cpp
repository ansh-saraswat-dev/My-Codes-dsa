class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        // int high=1e9;
        while(low<high){
            int mid=low+(high-low)/2;
            int c=0;
            for(int i=0;i<nums.size();i++)
                if(nums[i]<=mid)
                    c++,i++;
            if(c>=k)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};