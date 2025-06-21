class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int beg=0,end=0;
        unordered_set<char> st;
        int ans=0;

        while(end < s.size()){
            while(st.count(s[end]))
                st.erase(s[beg]),beg++;
            st.insert(s[end]);
            // ans=max(ans,end-beg+1);
            ans=max(ans,(int)st.size());
            end++;
        }
        return ans;
    }
};