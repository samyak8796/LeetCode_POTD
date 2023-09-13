class Solution {
public:
    int candy(vector<int>& ratings){
        int ans = 1;
        int e = 0, s = 0, peak = 0;
        int n = ratings.size();
        for(int i=1;i<n;i++){
            if(ratings[i-1]<ratings[i]){
                e++;
                peak = e;
                s = 0;
                ans += e+1;
            }
            else if(ratings[i-1] == ratings[i]){
                peak = e = s = 0;
                ans++;
            }
            else{
                e = 0;
                s++;
                if(peak >= s)
                    ans += s;
                else
                    ans += s+1;
            }
        }
        return ans;
    }
};
