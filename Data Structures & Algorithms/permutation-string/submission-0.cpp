class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        for(int i=0; i<s2.size(); i++){
            for(int j=i; j<s2.size(); j++){
                string substrS2=s2.substr(i, j-i+1);
                if(substrS2.size()>s1.size()){
                    break;
                }else{
                    sort(substrS2.begin(), substrS2.end());
                    if(s1==substrS2){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
