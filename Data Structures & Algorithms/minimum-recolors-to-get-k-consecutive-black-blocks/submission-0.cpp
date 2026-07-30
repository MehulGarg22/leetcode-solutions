class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        string window="";
        int countW=0;
        int ans=INT_MAX;
        for(int i=0; i<k; i++){
            char c=blocks[i];
            window+=c;
        }
        for(int i=0; i<window.size(); i++){
            char c=window[i];
            if(c=='W') countW++;
        }
        ans=min(ans, countW);
        return ans;
    }
};