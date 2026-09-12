class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        int i=0, j=v.size()-1;
        while(i<j){
            int val=v[i].first+v[j].first;
            if(val==target){
                int first=min(v[i].second, v[j].second);
                int second=max(v[i].second, v[j].second);
                return {first, second};
            }
            else if(val>target) j--;
            else i++;
        }
        return {};
    }
};
