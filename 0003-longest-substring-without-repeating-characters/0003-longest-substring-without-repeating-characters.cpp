class Solution {
public:
    int lengthOfLongestSubstring(string size) {
        unordered_set<char> charset;
    int left=0;
    int maxlength=0;
    for(int right=0;right<size.length();right++){
        while(charset.count(size[right])>0){
            charset.erase(size[left]);
            left++;
        }
    
    charset.insert(size[right]);
    maxlength=max(maxlength,right-left+1);
    }
    return maxlength;
    }
};