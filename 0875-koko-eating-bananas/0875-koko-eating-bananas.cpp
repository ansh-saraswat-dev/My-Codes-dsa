class Solution {
public:
    bool canEat(vector<int>& piles,int k,int h){
        int hours=0;
        for(auto pile:piles){
            hours += (pile+k-1)/k;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(canEat(piles,mid,h)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};