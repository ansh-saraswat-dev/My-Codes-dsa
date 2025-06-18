class Solution {
public:
    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        int ans=high;
        while(low<=high){
        int mid=low+(high-low)/2;
        int total=0;
        for(auto ar : arr){
            total += ceil((double)ar/mid);
        }
        if(total <= threshold){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        }
        return ans;
    }
};