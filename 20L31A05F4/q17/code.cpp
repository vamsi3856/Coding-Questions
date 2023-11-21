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
            int i,j;
            for(i=1;i<=n;i++){
                for(j=1;j<=3;j++){
                    if((i+j)%2==0){
                        if((i!=j) and (i+j)%4==0 and i%2!=0 and j%2!=0)
                        outfile<<' ';
                        else
                        outfile<<'*';
                    }
                    else
                    outfile<<' ';
                }
                outfile<<endl;
            }
         infile.close();
         outfile.close();
    }    
}