class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> map;
   for(string word:strs){
    string sortword=word;
    sort(sortword.begin(),sortword.end());
    map[sortword].push_back(word);
   }
   vector<vector<string>> result;
   for(auto&pair:map){
    result.push_back(pair.second);
   }
   return result;
    }
};