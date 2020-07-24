#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "";
    cin >> s;

    vector<string> weeks;
    weeks = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for (int i = 0; i < weeks.size(); i++) {
        if (weeks.at(i) == s) {
            cout << weeks.size() - i << endl;
            break;
        }
    }
}