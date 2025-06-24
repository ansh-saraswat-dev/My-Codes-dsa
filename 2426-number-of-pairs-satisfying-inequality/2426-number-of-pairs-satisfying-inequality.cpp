#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;    
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> oset;

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        long long ans=0;
        oset os;
        vector<int>d;
        for(int i=0;i<nums1.size(); i++){
            d.push_back(nums1[i]-nums2[i]);
        }
        for(int i:d){
            ans+=os.order_of_key(i+diff+1);
            os.insert(i);
        }
        return ans;
    }
};
//nums1[i]-nums1[j] <= nums2[i]-nums2[j] + diff
// nums[i]-nums2[i] <= nums1[j]-nums2[i] + diff
// d[i] < d[j] + diff + 1
