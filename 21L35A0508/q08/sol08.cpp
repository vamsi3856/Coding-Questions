#include <iostream>
#include <vector>
#include <string>
using namespace std;


void generateNumbers(int n, int k, string current, vector<string>& result) {
    if (n == 0) {
        result.push_back(current);
        return;
    }

    int lastDigit = current[current.length() - 1] - '0';
    
    if (lastDigit + k <= 9) {
        generateNumbers(n - 1, k, current + to_string(lastDigit + k), result);
    }
    
    if (lastDigit - k >= 0 && k != 0) {
        generateNumbers(n - 1, k, current + to_string(lastDigit - k), result);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<string> result;
        
        for (int i = 1; i <= 9; i++) {
            generateNumbers(n - 1, k, to_string(i), result);
        }

        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
