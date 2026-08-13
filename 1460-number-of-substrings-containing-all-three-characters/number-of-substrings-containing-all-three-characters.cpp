class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int cnt = 0;
        vector<int> freq(3,0);
        for(int right = 0 ; right<s.length(); right++){
            freq[s[right]-'a']++;
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                cnt += (s.length()-right);
                freq[s[left]-'a']--;
                left++;
            }
        }
        return cnt;
    }
};