class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>>time;
        stack<double>st;
        for(int i=0; i<position.size(); i++){
            double val=(double)(target-position[i])/speed[i];
            time.push_back({position[i], val});
        }
        sort(time.rbegin(), time.rend());
        for(int i=0; i<time.size(); i++){
            if(st.empty()){
                st.push(time[i].second);
            }else if(time[i].second>st.top()){
                st.push(time[i].second);
            }
        }
        return st.size();
    }
};
