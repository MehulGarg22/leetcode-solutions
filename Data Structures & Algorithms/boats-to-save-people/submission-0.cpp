class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0, j=people.size()-1;
        sort(people.begin(), people.end());
        vector<vector<int>>v;
        while(i<=j){
            if(people[j]==limit){
                v.push_back({people[j]});
                j--;
            }
            else if(people[i]==limit){
                v.push_back({people[i]});
                i++;
            }
            else{
                int val=people[i]+people[j];
                if(val<=limit){
                    v.push_back({people[i], people[j]});
                    i++;
                    j--;
                }else{
                    v.push_back({people[j]});
                    j--;
                }
            }
        }
        return v.size();
    }
};