#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> answer;
        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] <= arr[j]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                answer.push_back(arr[i]);
            }
        }
        for (auto i = answer.begin(); i != answer.end(); ++i)
            cout << *i << " ";
    }
    return 0;
}
