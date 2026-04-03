class KthLargest {
public:
    vector<int> arr;
    int K;
    KthLargest(int k, vector<int>& nums) {
        arr=nums;
        K=k;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(), arr.end());
        return (arr[arr.size()-K]);
    }
};
