class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        // Sabhi elements ki frequency count karo
        for (int x : nums)
            freq[x]++;
        // Case 1
        if (k == 1) {
            int ans = -1;
            for (auto &it : freq) {
                if (it.second == 1)
                    ans = max(ans, it.first);
            }
            return ans;
        }
        // Case 2
        if (k == n)
            return *max_element(nums.begin(), nums.end());
        // Case 3
        int ans = -1;
        if (freq[nums[0]] == 1)
            ans = max(ans, nums[0]);
        if (freq[nums[n - 1]] == 1)
            ans = max(ans, nums[n - 1]);
        return ans;
    }
};
