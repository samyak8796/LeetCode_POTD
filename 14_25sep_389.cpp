class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums = 0;
        for(int i=0;i<s.size();i++){
            sums += (int)(s[i] - 'a');
        }
        int sumt = 0;
        for(int i=0;i<t.size();i++){
            sumt += (int)(t[i] - 'a');
        }
        int sum = sumt-sums;
        char ans = (char)(sum + 'a');
        return ans;
    }
};
