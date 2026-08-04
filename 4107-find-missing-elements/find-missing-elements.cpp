class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // Step 1: sort the array
        sort(nums.begin(), nums.end());

        // Step 2: find min and max
        int mn = nums[0];
        int mx = nums[nums.size() - 1];

        vector<int> missing;

        // Step 3: check each number between min and max
        int j = 0; // pointer for nums
        for(int i = mn; i <= mx; i++) {
            if(j < nums.size() && nums[j] == i) {
                // element exists in nums
                j++;
            } else {
                // element missing
                missing.push_back(i);
            }
        }

        return missing;
    }
};
