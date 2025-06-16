class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
//int n;
//k%=n;
//for(int i=n-k;i<n;i++){
    // arr.push_back(nums[i]);
// }
//for(int i=0;i<n-k;i++){
    // arr.push_back(nums[i]);
// }
// nums=arr;