class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
    vector<int> lettercount(26,0);
    for(char c:magazine){
        lettercount[c-'a']++;
    }
    for (char c:ransomnote){
        lettercount[c-'a']--;
        if(lettercount[c-'a']<0){
            return false;
        }
    }
    return true;
    }
}; 