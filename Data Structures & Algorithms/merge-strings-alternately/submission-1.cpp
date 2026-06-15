class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString="";
        int minChar=min(word1.size(), word2.size());
        for(int i=0; i<minChar; i++){
            newString+=word1[i];
            newString+=word2[i];
        }
        if(word1.size()==minChar){
            for(int i=minChar; i<word2.size(); i++){
                newString+=word2[i];
            }
        }
        if(word2.size()==minChar){
            for(int i=minChar; i<word1.size(); i++){
                newString+=word1[i];
            }
        }
        return newString;
    }
};