class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        int mm=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        for(int x:nums){
            if(x!=mn && x!=mm){
                return x;
            }
        }
        return -1;
    }
};
