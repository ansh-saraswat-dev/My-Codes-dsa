class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxHeap;
        for(auto i:arr){
            int diff=abs(i-x);
            maxHeap.push({diff,i});

        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    vector<int> result;
    while(!maxHeap.empty()){ //k-- also works
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    sort(result.begin(),result.end());
    return result;
    }
};