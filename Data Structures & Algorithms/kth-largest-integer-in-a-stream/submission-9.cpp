class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> smallest;
    int Kth;
    KthLargest(int k, vector<int>& nums) {
        Kth=k;
        for(int i=0; i<nums.size(); i++){
            smallest.push(nums[i]);
            while(smallest.size()>k){
                smallest.pop();
            }
            
        }
    }
    
    int add(int val) {
        smallest.push(val);
        while(smallest.size()>Kth){
            smallest.pop();
        }
        return smallest.top();
    }
};
