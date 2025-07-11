#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long total = 0;

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        total += x;
    }

    cout << (total < 0 ? -total : total) << endl;

    return 0;
}
