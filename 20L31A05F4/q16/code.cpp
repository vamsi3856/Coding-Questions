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

int sol(int n,int m,string a,string b){
    int i=0,j=0;
    string move="Alice";
    while(i<n && j<m){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                if (move=="Alice"){
                    move="Bob";
                    i++;
                }
                else{
                    move="Alice";
                    j++;
                }
            }
        }
        if(i>=n){
            outfile<<"Alice\n"<<j<<endl;
        }
        else{
            outfile<<"Bob\n"<<i<<endl;
        }
}

char gen(){
    string s="RGB";
    return s[rand()%3];
}

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
            int t=1+rand()%10;
            infile<<t<<endl;
            while(t--){
                int n,m;
            n=1+rand()%100;
            m=1+rand()%100;
            infile<<n<<endl;
            string s1="";
            string s2="";
            for(int i=0;i<n;i++){
                s1+=gen();
            }
            infile<<s1<<endl<<m<<endl;
            for(int i=0;i<m;i++){
                s2+=gen();
            }
            infile<<s2<<endl;
            sol(n,m,s1,s2);
            }
         infile.close();
         outfile.close();
    }    
}