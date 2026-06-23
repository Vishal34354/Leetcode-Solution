class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int res=0;
        int cur=0;
        for(int i=0;i<n;i++){
            cur+=gain[i];
            res=max(res,cur);
        }
        return res;
    }
};