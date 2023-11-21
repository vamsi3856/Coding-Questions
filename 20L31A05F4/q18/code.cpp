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
            int n=1+rand()%100;
            int k=1+rand()%100;
            infile<<n<<" "<<k<<endl;
            int i,j;
            int a[n][n];
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    a[i][j]=1+rand()%1000;
                    infile<<a[i][j]<<" ";
                }
                infile<<endl;
            }
            for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;
               x=a[i][j]-k;
                if(x<0)
                a[i][j]=0;
                else
                a[i][j]=x;
                outfile<<a[i][j]<<" ";
            }
            outfile<<endl;
            }
         infile.close();
         outfile.close();
    }    
}