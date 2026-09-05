class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int currsum=0;
        int ans=0;
        for(int i=0; i<k; i++){
            currsum+=arr[i];
        }
        if((currsum/k)>=threshold) ans++;
        for(int i=k; i<arr.size(); i++){
            currsum+=arr[i]-arr[i-k];
            if((currsum/k)>=threshold) ans++;
        }
        return ans;
    }
};