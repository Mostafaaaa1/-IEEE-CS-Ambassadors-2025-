#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], pos = 0;
    cin >> a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < mn) {
            mn = a[i];
            pos = i;
        }
    }
    cout << mn << " " << pos + 1 << endl;
    return 0;
}
