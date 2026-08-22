class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();

        // Count frequency of each element
        for(int num : nums) {
            freq[num]++;
        }

        vector<int> ans;
        for(auto &p : freq) {
            if(p.second > n/3) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};
