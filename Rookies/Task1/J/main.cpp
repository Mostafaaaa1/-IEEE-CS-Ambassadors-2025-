#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], freq = 0, mn = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < mn) {
            mn = a[i];
            freq = 1;
        } else if (a[i] == mn) freq++;
    }
    cout << (freq % 2 == 1 ? "Lucky" : "Unlucky") << endl;
    return 0;
}
