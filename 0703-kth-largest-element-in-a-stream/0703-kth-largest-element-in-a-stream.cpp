class KthLargest {
    int k;
    priority_queue<int,vector<int>,greater<int>> pq;
    //create a min-heap of fixed size k to keep track of the largest k elements

public:
    KthLargest(int k2, vector<int>& nums) {
        k=k2;
        for(int i:nums){
            pq.push(i);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k)
            pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */