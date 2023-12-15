#include <iostream>
#include <string>
using namespace std;

string Removing_words(string s, string t) {
    int length_s = s.size();
    int length_t = t.size();

    for (int i = 0; i < length_s; i++) {
        int j = 0;
        for (; j < length_t; j++) {
            if (t[j] != s[i + j]) {
                break;
            }
        }

        if (j == length_t) {
            for (int k = 0; k < length_t; k++) {
                s[i + k] = ' ';
            }
        }
    }

    return s;
}

int main() {
    string s, t;
    cout << "Enter Source String: ";
    getline(cin, s);
    cout << "Enter Target String: ";
    getline(cin, t);
    cout << Removing_words(s, t) << endl;

    return 0;
}

