class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        set<pair<int,int>> s;
        for(int i=0;i<row;i++){
            int sum = 0;
            for(int j=0;j<col;j++){
                sum += mat[i][j];
            }
            s.insert(make_pair(sum,i));
        }
        vector<int> ans;
        auto it = s.begin();
        while(it != s.end() && k>0){
            ans.push_back(it->second);
            k--;
            it++;
        }
        return ans;
    }
};
