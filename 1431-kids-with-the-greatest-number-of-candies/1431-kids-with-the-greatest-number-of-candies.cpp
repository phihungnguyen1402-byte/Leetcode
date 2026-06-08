#include <vector>
#include <algorithm> // Thư viện để dùng hàm tìm max nhanh

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
   int maxCandies=*max_element(candies.begin(),candies.end());
   vector<bool> result;
   for(int candy:candies){
    result.push_back(candy+extraCandies>= maxCandies);
   }
   return result;
    }
};