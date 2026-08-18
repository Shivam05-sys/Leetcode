class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int x : nums) freq[x]++;

        // Case 1: k == 1 → element must appear exactly once
        if(k == 1) {
            int ans = -1;
            for(auto &it : freq) {
                if(it.second == 1) ans = max(ans, it.first);
            }
            return ans;
        }

        // Case 2: k == n → whole array is one subarray
        if(k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        // Case 3: 1 < k < n → only first and last element can qualify
        int ans = -1;
        if(freq[nums[0]] == 1) ans = max(ans, nums[0]);
        if(freq[nums[n-1]] == 1) ans = max(ans, nums[n-1]);
        return ans;
    }
};
