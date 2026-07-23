class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]<2){
                mp[nums[i]]++;
            }
        }
        for(auto& itr: mp){
            int val=itr.second;
            while(val!=0){
                ans.push_back(itr.first);
                val--;
            }
        }
        for(int i=0; i<ans.size(); i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};