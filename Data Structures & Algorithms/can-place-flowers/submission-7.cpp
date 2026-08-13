class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int val=n;
        if(flowerbed.size()==1 )
        {
            if(flowerbed[0]==0){
                
            return true; 
            }
        } 
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            val--;
        }
        for(int i=1; i<flowerbed.size(); i++){
            if(flowerbed[i]==0 ){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    val--;
                }
            }
        }
        if(val<=0) return true;
        return false;
    }
};