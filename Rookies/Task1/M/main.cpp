#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], minIdx = 0, maxIdx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < a[minIdx]) minIdx = i;
        if (a[i] > a[maxIdx]) maxIdx = i;
    }
    swap(a[minIdx], a[maxIdx]);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
