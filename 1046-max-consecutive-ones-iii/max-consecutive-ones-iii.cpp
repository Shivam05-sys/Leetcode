class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int zeros = 0;
        int maxlen = 0;

        while(right < nums.size()) {
            if(nums[right] == 0) {
                zeros++;
            }

            // shrink window if zeros exceed k
            while(zeros > k) {
                if(nums[left] == 0) {
                    zeros--;
                }
                left++;
            }

            // update max length
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
