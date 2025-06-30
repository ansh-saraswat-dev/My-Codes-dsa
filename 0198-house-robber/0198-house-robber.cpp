// class Solution {
// public:
//     int solve(int i,int n,vector<int>&arr){
//         if(i>=n) return 0;
//         int chori = arr[i] + solve(i+2,n,arr);
//         int notchori = solve(i+1,n,arr);
//         return max(chori,notchori);
//     }
//     int rob(vector<int>& nums) {
//     int n=nums.size();
//     return solve(0,n,nums);
//     }
// };
class Solution{
    public:
        int rob(vector<int>& nums){
            int prev=0;
            int prev2=0;
            for(auto i:nums){
                int temp = prev;
                prev = max(prev,i+prev2);
                prev2 = temp;
            }
            return prev;
        }
};