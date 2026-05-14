

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = ""; // Chuỗi để dán túi 1
        string s2 = ""; // Chuỗi để dán túi 2

        // Bước 1: Dán các mảnh trong word1
        for (string s : word1) {
            s1 += s; 
        }

        // Bước 2: Dán các mảnh trong word2
        for (string s : word2) {
            s2 += s;
        }

        // Bước 3: So sánh hai kết quả cuối cùng
        return s1 == s2;
    }
};