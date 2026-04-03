class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        int i=0, j=nums.size()-1;
        while(i<j){
            int value=(v[i].first+v[j].first);
            if(value==target){
                int minIndex=min(v[i].second, v[j].second);
                int maxIndex=max(v[i].second, v[j].second);
                return{minIndex, maxIndex};
            }
            else if(value<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};
