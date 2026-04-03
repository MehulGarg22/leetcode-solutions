class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i=0, j=numbers.size();

        while(i<j){
            int val=numbers[i]+numbers[j];
            if(val==target){
                return {numbers[i], numbers[j]};
            }
            if(val<target) i++;
            else j--;
        }


        return {};
    }
};
