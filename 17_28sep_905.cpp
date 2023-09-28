class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if((nums[i]&1) && (!(nums[j]&1))){
                swap(nums[i++],nums[j--]);
            }
            if(nums[j]&1)
                j--;
            if(!(nums[i]&1))
                i++;
        }
        return nums;
    }
};
