/*
https://codeforces.com/problemset/problem/71/A
*/

#include <iostream>
using namespace std;

void convert(string);

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++) {
        convert(s[i]);
    }
    return 0;
}

void convert(string s) {
    if(s.length() > 10) {
        cout << s[0];
        cout << s.length() - 2;
        cout << s[s.length() - 1] << endl;
    } else {
        cout << s << endl;
    }
}