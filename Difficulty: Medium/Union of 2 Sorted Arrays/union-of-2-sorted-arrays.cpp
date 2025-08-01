class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(a[i]);
        }
        for(int j=0;j<n2;j++){
            st.insert(b[j]);
        }
        vector<int> temp;
        for(auto it:st){
            temp.push_back(it);
        }
        return temp;
    }
};