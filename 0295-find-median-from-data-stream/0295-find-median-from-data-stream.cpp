class MedianFinder {
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
public:
    MedianFinder() {
        
    }
    
     void addNum(int num) {
        maxHeap.push(num);

        // Make sure every number in maxHeap <= every number in minHeap
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Balance the sizes
        if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    // Returns the median of current data stream
    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top(); // Odd size
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0; // Even size
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */