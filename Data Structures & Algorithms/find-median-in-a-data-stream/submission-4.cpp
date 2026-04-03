class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int, vector<int>, greater<int>>minheap;

    MedianFinder() {}
    
    void addNum(int num) {
        maxheap.push(num);

        minheap.push(maxheap.top());
        maxheap.pop();
        
        if(minheap.size()>maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(minheap.size()!=maxheap.size()) return maxheap.top();
        else return (minheap.top()+maxheap.top())/2.0;
    }
};
