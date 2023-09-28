class Solution {
public:
    string decodeAtIndex(string s, int k) {
        // vector<int> arr;
        // long long in = 0, previn;
        // for(int i=0;i<s.size();i++){
        //     if(isdigit(s[i])){
        //         in *= (s[i]-'0'); 
        //     }
        //     else{
        //         in++;
        //     }
        //     arr.push_back(in);
        // }
        // for(int i=arr.size()-1;i>=0;i--){
        //     if(arr[i] == k){
        //         if(!isdigit(s[i]))
        //             return string(1,s[i]);
        //         else{
        //             while(isdigit(s[i])){
        //                 i--;
        //             }
        //             return string(1,s[i]);
        //         }
        //     }
        //     else if(arr[i]<k){
        //         k %= arr[i];
        //     }
        //     if(k == 0){
        //         while(isdigit(s[i])){
        //                 i--;
        //         }
        //         return string(1,s[i]);
        //     }
        // }
        // return "-1";
        long long N = 0, i;
        for (i = 0; N < k; ++i)
            N = isdigit(s[i]) ? N * (s[i] - '0') : N + 1;
        while (i--)
            if (isdigit(s[i]))
                N /= s[i] - '0', k %= N;
            else if (k % N-- == 0)
                return string(1, s[i]);
        return "-1";
    }
};
