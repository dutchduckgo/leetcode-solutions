class MedianFinder {
private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } 
        else if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        // 1 2, 3, 4, 5
        /*
        min: 3 4 
        max: 2, 1
        */
        // check if heaps sizes are same
        // if same, add to max;
        // else pop from larger heap, insert to smaller heap,
        // add to max

    }
    
    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return (double)maxHeap.top();
        }
        return ((double)maxHeap.top() + (double)(minHeap.top())) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
