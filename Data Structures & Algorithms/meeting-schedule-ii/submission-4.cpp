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
        if(intervals.size()==0 || intervals.size()==1){
            return intervals.size();
        }
        int count=0;
        sort(intervals.begin(), intervals.end(), [](const Interval &a, const Interval&b){
            return a.start<b.start;
        });
        int prevEnd=intervals[0].end;
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i].start<prevEnd){
                count++;
            }else{
                prevEnd=intervals[i].end;
            }
        }
        return count;
    }
};
