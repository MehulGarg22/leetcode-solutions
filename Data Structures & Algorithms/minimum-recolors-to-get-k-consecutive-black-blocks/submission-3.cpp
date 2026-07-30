class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int countW=0;
        int ans=INT_MAX;
        for(int i=0; i<k; i++){
            char c=blocks[i];
            if(c=='W') countW++;
        }
        ans=countW;
        for(int i=k; i<blocks.size(); i++){
            char c=blocks[i];
            if(blocks[i-k]=='W') countW--;
            if (c=='W') countW++;
            ans=min(ans, countW);
        }
        return ans;
    }
};