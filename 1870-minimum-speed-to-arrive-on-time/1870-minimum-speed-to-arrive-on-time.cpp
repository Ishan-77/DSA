class Solution {
public:
    
    double isPossible(vector<int>&dist,double hour,int speed) {
        double time = 0.0;
        for(int i=0;i<dist.size();i++) {
            if(i==dist.size()-1) {
                time+= double(dist[i])/ double(speed);
            }
            else {
                time+= ceil(double(dist[i])/double(speed));
            }
        }
        return time<=hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int l  = 1;
        int h = 1e7;
        int minspeed = -1;
        
        while(l<=h) {
            double mid = l+(h-l)/2;
            
            if(isPossible(dist,hour,mid)) {
                minspeed = mid;
                h = mid-1;
                
            }
            else {
                l = mid+1;
            }
        }
        return minspeed;
        
    }
};