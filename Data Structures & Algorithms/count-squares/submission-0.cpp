class CountSquares {
    public:
        vector<pair<int, int>>v;
        int cnt[1001][1001]={0};

        CountSquares() {
            
        }

        void add(vector<int> point) {
            int x=point[0], y=point[1];
            v.push_back({x,y});
            cnt[x][y]++;
        }

        int count(vector<int> point) {
            int px=point[0], py=point[1];
            int totalCount=0;
            for(auto ptr: v){
                int x=ptr.first, y=ptr.second;
                if(abs(px-x)!=0 && abs(px-x)==abs(py-y)){
                    totalCount+=cnt[x][py]*cnt[px][y];
                }
            }
            return totalCount;
        }
};
