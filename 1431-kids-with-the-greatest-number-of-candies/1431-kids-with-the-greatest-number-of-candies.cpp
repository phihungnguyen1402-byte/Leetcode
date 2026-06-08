#include <vector>
#include <algorithm> // Thư viện để dùng hàm tìm max nhanh

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Tìm số kẹo lớn nhất hiện tại bằng hàm max_element
        // Lưu ý: max_element trả về con trỏ (iterator), nên cần thêm dấu * ở trước để lấy giá trị
        int maxCandies = *max_element(candies.begin(), candies.end());
        
        vector<bool> result;
        
        // Duyệt qua từng bé và kiểm tra
        for (int candy : candies) {
            // Biểu thức (candy + extraCandies >= maxCandies) sẽ tự động trả về true hoặc false
            // Nên mình đưa thẳng vào hàm push_back luôn cho gọn
            result.push_back(candy + extraCandies >= maxCandies);
        }
        
        return result;
    }
};