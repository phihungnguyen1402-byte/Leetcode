class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
    int left = 0;   
        int maxlength = 0;

        for (int right = 0; right < s.length();right++) {
            char wordnew = s[right];
            while (charset.contains(wordnew)){

                charset.erase(s[left]); 
                left++; 
            }
            charset.insert(wordnew);
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};