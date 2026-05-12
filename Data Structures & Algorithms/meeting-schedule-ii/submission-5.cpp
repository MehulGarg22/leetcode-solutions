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
        int s=0, e=0;
        int count=0;
        int maxCount=0; 
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        while(s<intervals.size()){
            if(start[s]<end[e]){
                count++;
                s++;
                maxCount=max(maxCount, count);
            }else{
                count--;
                e++;
            }
            
        }
        return maxCount;
    }
};
