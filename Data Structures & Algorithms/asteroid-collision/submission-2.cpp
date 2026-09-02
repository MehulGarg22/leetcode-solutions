class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        st.push(asteroids[0]);
        for(int i=1; i<asteroids.size(); i++){
            if(asteroids[i]<0){
                bool destroyed=false;
                while(!st.empty() && st.top()>0){
                    if(abs(asteroids[i])==abs(st.top())){
                        // Case: No need to add it to stack as incoming asteroid is destroyed and also remove the asteroid in the stack
                        st.pop();
                        destroyed=true;
                        break;
                    }else if(abs(asteroids[i])>abs(st.top())){
                        st.pop();
                    }else{
                        // Case where abs(asteroids[i])<abs(st.top()) so no need to add it to stack as incoming asteroid is destroyed
                        destroyed=true;
                        break;
                    }
                }
                if(destroyed==false){
                    st.push(asteroids[i]);
                }
            }else{
                st.push(asteroids[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};