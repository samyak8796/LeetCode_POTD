class Solution {
    static bool compare(string &s1, string &s2){
        return s1.length() < s2.length();
    }
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        unordered_map<string,int> dp;
        int ans = 1;
        for(string val:words){
            dp[val] = 1;
            for(int i=0;i<val.length();i++){
                string temp = val.substr(0,i) + val.substr(i+1);
                if(dp.find(temp) != dp.end()){
                    dp[val] = max(dp[val],dp[temp]+1);
                    ans = max(ans,dp[val]);
                }
            }
        }
        return ans;
    }
};
