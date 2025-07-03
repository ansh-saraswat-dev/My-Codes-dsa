class Solution {
public:
    int canEat(vector<int>& piles,int k,int h){
        int ans=0;
        for(auto i:piles){
            ans += (i+k-1)/k;
        }
        return ans <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid= low + (high-low)/2;
            if(canEat(piles,mid,h)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};