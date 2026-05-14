#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // 1. Nếu là ngoặc mở -> Đẩy vào ngăn xếp
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            // 2. Nếu là ngoặc đóng -> Kiểm tra
            else {
                // Nếu gặp ngoặc đóng mà ngăn xếp rỗng -> SAI
                if (st.empty()) return false;

                char top = st.top(); // Xem thằng mở gần nhất
                
                // Kiểm tra xem có khớp đôi không
                if ((c == ')' && top == '(') || 
                    (c == ']' && top == '[') || 
                    (c == '}' && top == '{')) {
                    st.pop(); // Khớp thì bỏ qua cặp này
                } else {
                    return false; // Không khớp loại -> SAI
                }
            }
        }
        // Cuối cùng, nếu ngăn xếp rỗng thì mới là ĐÚNG
        return st.empty();
    }
};