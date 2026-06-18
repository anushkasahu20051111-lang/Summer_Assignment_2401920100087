class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int x:nums){
            cnt[x]++;
        }
        unordered_map<int,int> freq;
        for(auto &[nums,f] : cnt){
            freq[f]++;
        }
        for(int x:nums){
            if(freq[cnt[x]]==1){
                return x;
            }
        }
        return -1;
    }
};
