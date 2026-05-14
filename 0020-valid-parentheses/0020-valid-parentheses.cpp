#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        cout << " Kiem tra chuoi: " << s << "  " << endl;

        for (char c : s) {
            cout << "Ky tu dang xet: " << c << "" << endl;

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
                cout << "  -> La ngoac mo. Da day " << c << " vao stack." << endl;
            } 
            else {
                // Truong hop gap ngoac dong
                if (st.empty()) {
                    cout << "  !! LOI: Gap ngoac dong " << c << " nhung stack dang rong (khong co ngoac mo)." << endl;
                    return false;
                }

                char top = st.top();
                cout << "  -> Dang so khop ngoac dong " << c << " voi ngoac mo moi nhat: " << top << "" << endl;

                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop();
                    cout << "  => KHOP! Da xoa " << top << " khoi stack." << endl;
                } else {
                    cout << "  !! LOI: Ngoac " << c << " khong khop voi " << top << "." << endl;
                    return false; // Ban can return false o day neu khong khop
                }
            }
        }

        if (st.empty()) {
            cout << " KET QUA: Stack rong -> Chuoi hop le! " << endl;
        } else {
            cout << " KET QUA: Stack van con ngoac mo chua duoc dong -> Khong hop le! " << endl;
        }

        return st.empty();
    }
};