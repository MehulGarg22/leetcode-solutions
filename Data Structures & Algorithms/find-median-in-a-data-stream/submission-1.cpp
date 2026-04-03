class MedianFinder {
public:
    vector<int>arr;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        arr.push_back(num);
    }
    
    double findMedian() {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        if(n%2==0){
            return ((arr[n/2-1]+arr[n/2])/2.0);
        }else{
            return arr[n/2];
        }
    }
};
