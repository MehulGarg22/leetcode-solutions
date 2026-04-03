class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          set<vector<int>>res;

          sort(nums.begin(), nums.end());
          for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            else{
                int j=i+1, k=nums.size()-1;
                while(j<k){
                    int sum= nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        res.insert({nums[i], nums[j], nums[k]});
                        j++;
                        k--;
                    }
                    else if(sum>0){
                        k--;
                    }
                    else if(sum<0){
                        j++;
                    }
                }
            }
          }
            return res;
    }
};
