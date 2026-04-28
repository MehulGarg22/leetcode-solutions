class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool first=false;
        bool second=false;
        bool third=false;
        for(auto& itr: triplets){
            if(itr[0]>target[0] || itr[1]>target[1] || itr[2]>target[2]) continue;

            if(itr[0]==target[0]) first=true;
            if(itr[1]==target[1]) second=true;
            if(itr[2]==target[2]) third=true;
        }
        return first && second && third;
    }
};
