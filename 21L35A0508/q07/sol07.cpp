#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A, B;

        for (int i = 1; i <= N; i++) {
            A.push_back(i);
            B.push_back(i + N);
        }

 
        vector<int> C;
        for (int i = 0; i < N; i++) {
            C.push_back(A[i] + B[i]);
        }

        map<int, int> frequency;

        for (int num : C) {
            frequency[num]++;
        }

        for (int i = 0; i < M; i++) {
            int query;
            cin >> query;

            if (frequency.find(query) != frequency.end()) {
                cout << frequency[query] << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
