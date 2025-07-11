#include <iostream>
using namespace std;
int main() {
    int n, isPal = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    cout << (isPal ? "YES" : "NO") << endl;
    return 0;
}
