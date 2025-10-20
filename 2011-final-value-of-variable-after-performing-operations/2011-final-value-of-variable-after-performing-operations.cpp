class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int ans=0;
        for (int i = 0; i < n; i++) {
            string s=operations[i];
            if(s=="--X" || s=="X--"){
                ans=ans-1;
            }
            else if(s=="++X"||s=="X++"){
                ans += 1;
            }
        }
        return ans;
    }
};