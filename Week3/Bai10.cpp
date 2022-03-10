#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    cin >> s;
    if (s.length() < 6 || s.length() > 15) {
        cout << "Invalid username.";
        return 0;
    }
    if (48 <= s[0] && s[0] <= 57) {
        cout << "Invalid username.";
        return 0;
    }
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
        if (65 <= s[i] && s[i] <= 90 || 97 <= s[i] && s[i] <= 122 || 48 <= s[i] && s[i] <= 57) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "Valid username.";
    } else {
        cout << "Invalid username.";
    }
}