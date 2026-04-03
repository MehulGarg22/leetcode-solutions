class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> v;
        stack<double>st;
        for(int i=0; i<position.size(); i++){
            double time=(double)((target-position[i])/speed[i]);
            v.push_back({position[i], time});
        }
        sort(v.rbegin(), v.rend());

        for(int i=0; i<v.size(); i++){
            double currentTime=v[i].second;

            if(st.empty()){
                st.push(currentTime);
            }else if(currentTime>st.top()){
                st.push(currentTime);
            }
        }
        return st.size();
    }
};
