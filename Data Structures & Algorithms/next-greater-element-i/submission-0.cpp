class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        vector<int>v(nums1.size(),-1);
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]=i;
        }
        for(int i=0; i<nums2.size(); i++){
            if(mp.find(nums2[i])!=mp.end()){
                for(int j=i+1; j<nums2.size(); j++){
                    if(nums2[i]<nums2[j]){
                        int indx=mp[nums2[i]];
                        v[indx]=nums2[j];
                        break;
                    }
                }
            }
        }
        return v;
    }
};