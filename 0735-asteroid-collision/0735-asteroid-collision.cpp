class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int ast : asteroids) {
            bool alive = true;
            while (alive && ast < 0 && !st.empty() && st.top() > 0) {
                if (st.top() < -ast) {
                    st.pop(); 
                } else if (st.top() == -ast) {
                    st.pop(); 
                    alive = false;
                } else {
                    alive = false; 
                }
            }
            if (alive) st.push(ast);
        }
        
        vector<int> res(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};