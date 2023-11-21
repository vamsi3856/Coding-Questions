
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long int
#define uo unordered
#define pb push_back
#define ff first
#define ss second
#define vll vector<ll>
#define nl cout << "\n"
#define all(x) x.begin(), x.end()
#define print(a)     \
    for (auto i : a) \
    cout << i << " "

long long int mod = 1000000007;

ofstream infile, outfile;

vector<int> res{3, 7, 15, 31, 63};


int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size()!=1){
            
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            if(M[a][b]==1){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int celebrity = st.top();
        st.pop();
        
         // Check for all rows -> Celebrity doesnt know anyone
        for(int i=0;i<n;i++){
            if(M[celebrity][i] != 0){
                return -1;
            }
        }
        // Check for all cols -> All knows celebrity
        for(int i=0;i<n;i++){
            if(i != celebrity && M[i][celebrity] != 1){
                return -1;
            }
        }
        return celebrity;
    }
    int main()
    {

        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        srand(time(NULL));
        for (int i = 1; i <= 10; ++i)
        {
            if(i!=2 || i!=3) continue;
            string s1, s2;
            if (i <= 9)
            {
                s1 = "./in0" + to_string(i) + ".txt";
                s2 = "./out0" + to_string(i) + ".txt";
            }
            else
            {
                s1 = "./in" + to_string(i) + ".txt";
                s2 = "./out" + to_string(i) + ".txt";
            }

            infile.open(s1);
            outfile.open(s2);

            int t = 1 + rand() % 10;
            infile << t << "\n";

            for (int j = 1; j <= t; ++j)
            {
                vector<int> a;
                long long n = 1 * (rand() % 10 + 1);
                if(n%2){
                    n++;
                }
                infile << n << "\n";
                // long long arr[n];
                vector<vector<int>> arr(n, vector<int>(n, 0));
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        
                        int m = rand() % 2;
                        if(k!=l){
                            arr[k][l] = m;
                        
                        }
                        else {
                            arr[k][l] = 0;
                            m = 0;
                        }
                            infile << m << " ";
                    }
                    infile << "\n";
                    
                }
                infile << "\n";

                int ans = celebrity(arr, n);
                outfile << ans << "\n";
                
            }
            infile.close();
            outfile.close();
        }
        return 0;
    }
