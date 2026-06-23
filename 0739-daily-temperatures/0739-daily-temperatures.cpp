#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0); 
        int hottest = 0; 
        for (int i = n - 1; i >= 0; i--) {
            int currentTemp = temperatures[i];
            if (currentTemp >= hottest) {
                hottest = currentTemp;
                continue;
            }

            int days = 1; 
            while (temperatures[i + days] <= currentTemp) {
                days += answer[i + days];
            }
            answer[i] = days;
        }

        return answer;
    }
};