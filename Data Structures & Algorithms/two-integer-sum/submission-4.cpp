class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> sarray;

        for(int i=0; i<nums.size(); i++){
            sarray.push_back({nums[i], i});
        }

        sort(sarray.begin(), sarray.end());

        int i=0, j=nums.size()-1;

        while(i<j){
            int curr=sarray[i].first+sarray[j].first;
            if(curr==target){
                int minIndex=min(sarray[i].second, sarray[j].second);
                int maxIndex=max(sarray[i].second, sarray[j].second);
                return {minIndex, maxIndex};
            }
            else if(curr<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};