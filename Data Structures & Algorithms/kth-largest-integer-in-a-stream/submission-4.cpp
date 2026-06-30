class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> smallestq;
    int Kth;
    KthLargest(int k, vector<int>& nums) {
        Kth=k;
        for(int i=0; i<nums.size(); i++){
            smallestq.push(nums[i]);
            while(smallestq.size()>k){
                smallestq.pop();
            }
        }
    }
    
    int add(int val) {
        smallestq.push(val);
        while(smallestq.size()>Kth){
            smallestq.pop();
        }
        return smallestq.top();
    }
};
