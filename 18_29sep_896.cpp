class Solution {
public:
    bool isMonotonic(vector<int>& arr){
        bool flag1 = true, flag2 = true;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])
                flag1 = false;
            if(arr[i]<arr[i+1])
                flag2 = false;
            if(flag1 == false && flag2 == false)
                return false;
        }
        return true;
    }
};
