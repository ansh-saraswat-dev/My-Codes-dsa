class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        // vector<int> res(n);
        vector<int>ans;
        int left=0 , right=n-1;
        // int pos=n-1;
        // int pos=0;
        while(left<=right){
            int leftsq=nums[left]*nums[left];
            int rightsq=nums[right]*nums[right];
            if(leftsq>rightsq){
                // res[pos--]=leftsq;
                ans.push_back(leftsq);
                left++;
            }
            else{
                // res[pos--]=rightsq;
                ans.push_back(rightsq);
                right--;
            }
        }
        reverse(ans.begin(),ans.end());
    return ans;
    }
};