class CountSquares {
public:

    vector<pair<int, int>>v;
    int cnt[1001][1001]={0};
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        int x=point[0];
        int y=point[1];
        cnt[x][y]++;
        v.push_back({x,y});
    }
    
    int count(vector<int> point) {
        int x=point[0];
        int y=point[1];
        int totalcount=0;
        for(auto &itr: v){
            int px=itr.first;
            int py=itr.second;

            if(abs(px-x)!=0 && abs(px-x)==abs(py-y)){
                totalcount+=cnt[px][y]*cnt[x][py];
            }
        }
        return totalcount;
    }
};
