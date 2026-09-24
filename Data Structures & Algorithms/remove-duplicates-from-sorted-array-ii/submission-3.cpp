class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(auto&itr: nums){
            mp[itr]++;
        }
        

        for(auto &a: mp){
            int val=a.second;
            if(val<=2){
                while(val!=0){
                    ans.push_back(a.first);
                    val--;
                }
            }else{
                int val=2;
                while(val!=0){
                    ans.push_back(a.first);
                    val--;
                }
            }
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};