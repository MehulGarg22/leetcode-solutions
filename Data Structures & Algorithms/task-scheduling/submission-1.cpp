class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);
        for(int i=0; i<tasks.size(); i++){
            char c=tasks[i];
            mp[c-'A']++;
        }
        priority_queue<int>pq;
        for(int i=0; i<26; i++){
            if(mp[i]>0){
                pq.push(mp[i]);
            }
        }
        int time=0;
        while(!pq.empty()){
            vector<int>freq;
            for(int i=1; i<=n+1; i++){
                if(!pq.empty()){
                    int temp=pq.top();
                    pq.pop();
                    temp--;
                    freq.push_back(temp);
                }
            }
            for(auto &f:freq){
                if(f>0){
                    pq.push(f);
                }
            }

            if(pq.empty()){
                time+=freq.size();
            }else{
                time+=n+1;
            }
        }

        return time;         
    }
};
