class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int alpha=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            int time1=landStartTime[i]+landDuration[i];
            
            for(int j=0;j<waterStartTime.size();j++){
                int start=max(time1,waterStartTime[j]);;
                    int t_time=start+waterDuration[j];

                alpha=min(alpha,t_time);
            }
        }
            int time_w;
            for(int i=0;i<waterStartTime.size();i++){
               int time2=waterStartTime[i]+waterDuration[i];
               for(int j=0;j<landDuration.size();j++){
                   int start=max(time2,landStartTime[j]);
                   int finish=start+landDuration[j];
               
                alpha=min(alpha,finish);
            }
              
        }
        return alpha;
    }
};