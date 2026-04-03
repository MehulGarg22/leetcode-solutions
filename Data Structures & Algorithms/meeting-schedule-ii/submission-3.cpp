/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int>start;
        vector<int>end;
        for(int i=0; i<intervals.size(); i++){
            start.push_back(intervals[i].start);
            end.push_back(intervals[i].end);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int count=0, maxCount=INT_MIN;
        int s=0, e=0;
        if(intervals.size()==0) return 0;
        while(s<start.size()){
            if(start[s]<end[e]){
                count++;
                maxCount=max(count, maxCount);
                s++;
            }else{
                count--;
                e++;
            }
        }
        return maxCount;
    }
};
