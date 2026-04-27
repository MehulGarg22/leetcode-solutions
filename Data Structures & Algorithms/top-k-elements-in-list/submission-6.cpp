class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>fq;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            fq[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>>pq;

        for(auto &[key, val]:fq){
            pq.push({val, key});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
