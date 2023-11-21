#include <iostream>
#include <vector>
using namespace std;

long long calculateWays(int n) {
    if (n < 4) {
        return 0;
    }
    long long ways = (1LL * n * n * (n * n - 1)) / 2 - 4 * (n - 1) * (n - 2);
    return ways;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        for (int n = 1; n <= N; n++) {
            cout << calculateWays(n) << endl;
        }
    }

    return 0;
}
