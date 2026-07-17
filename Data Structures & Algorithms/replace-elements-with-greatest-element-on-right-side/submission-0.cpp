class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxSofar=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2; i>=0; i--){
            int current=arr[i];
            arr[i]=maxSofar;
            maxSofar=max(maxSofar, current);
        }
        return arr;
    }
};