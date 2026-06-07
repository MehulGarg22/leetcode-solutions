class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>ans;
        int numsSize=nums.size();
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto& itr: mp){
            if(itr.second>floor(numsSize/3)){
                ans.push_back(itr.first);
            }
        }
        return ans;
    }
};