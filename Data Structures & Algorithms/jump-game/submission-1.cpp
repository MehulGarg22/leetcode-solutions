class Solution {
public:
    bool canJump(vector<int>& nums) {
        int numsize=nums.size();
        int i=0;
        if(nums[i]>numsize-1);
        while(i<numsize-1){
            cout<<"i: "<< i<<endl;
            if(nums[i]==0 && i!=numsize-1) return false;
            else i=i+nums[i];
        }   
        return true;
    }
};
