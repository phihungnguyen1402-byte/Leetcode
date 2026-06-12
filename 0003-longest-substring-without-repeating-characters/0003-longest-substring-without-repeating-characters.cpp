class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> seen(128, false); 
        int left = 0;   
        int maxlength = 0;
        for (int right = 0; right < s.length(); right++) {
            char wordnew = s[right];
            while (seen[wordnew] == true) { 
                seen[s[left]] = false; 
                left++; 
            }
            seen[wordnew] = true;
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};