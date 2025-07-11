#include <iostream>
using namespace std;
int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool ok = true;
    if (s[a] != '-') ok = false;
    for (int i = 0; i < s.size(); i++) {
        if (i == a) continue;
        if (!isdigit(s[i])) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
