class Solution {
public:
    int minDeletions(string s){
        int ans = 0,count = 0;
        vector<pair<int,int>> arr(27);
        for(int i=0;i<s.size();i++){
            arr[int(s[i]-'a')].second = int(s[i]-'a');
            (arr[int(s[i]-'a')].first)++;
        }
        sort(arr.begin(),arr.end(),greater<pair<int, int> >());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i].first == arr[i+1].first){
                if(arr[i].first == 1){
                    while(arr[i].first != 0){
                        count++;
                        i++;
                    }
                    ans += count - 1;
                    break;
                }
                if(arr[i+1].first == 0 && arr[i+1].second == 0){
                    break;
                }
                ans++;
                (arr[i].first)--;
                sort(arr.begin(),arr.end(),greater<pair<int, int> >());
                i=-1;
            }
        } 
        return ans;
    }
};