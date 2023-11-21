#include <bits/stdc++.h>
using namespace std;

#define ll         long long
#define ull        unsigned long long int
#define uo         unordered     
#define pb         push_back
#define ff         first 
#define ss         second 
#define vll        vector<ll>
#define nl         cout << "\n"
#define all(x)     x.begin(),x.end()
#define print(a)   for(auto i : a) cout << i << " "  

long long int mod = 1000000007;


ofstream infile, outfile;

const int MAX_N = 100;
const int MAX_SUM = 1e5;



int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for(int ii = 1; ii <= 10; ++ii) {
        string s1, s2;
        
            s1 = "./TC/input" + to_string(ii) + ".txt";
            s2 = "./TC/output" + to_string(ii) + ".txt";
         infile.open(s1);
         outfile.open(s2);
            int n=1+rand()%1000;
            infile<<n<<endl;
            int a[n];
            for(int i=0;i<n;i++){
                a[i]=1+rand()%1000;
                infile<<a[i]<<" ";
            }
            vector<int> answer;
            for (int i = 0; i < n; i++) {
                bool flag = false;
                for (int j = i + 1; j < n; j++) {
                    if (a[i] <= a[j]) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    answer.push_back(a[i]);
                }
            }
            for(int i=0;i<answer.size();i++) outfile<<answer[i]<<" ";
         infile.close();
         outfile.close();
    }    
}