#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int mn = 2e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int res = a[i] + a[j] + j - i;
                if (res < mn) mn = res;
            }
        }
        cout << mn << endl;
    }
    return 0;
}
