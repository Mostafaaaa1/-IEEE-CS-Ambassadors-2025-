
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
        for (int i = 0; i < n; i++) {
            int mx = a[i];
            for (int j = i; j < n; j++) {
                mx = max(mx, a[j]);
                cout << mx << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
