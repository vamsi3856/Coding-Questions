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
long long minIncrementOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<long long> dp(n + 1, 1e18);
    dp[0] = 0; // Initialize the base case.

    for (int i = 1; i <= n; i++)
    {
        long long required = max(0, k - nums[i - 1]);
        for (int j = i - 1; j >= max(0, i - 3); j--)
        {
            dp[i] = min(dp[j], dp[i]);
        }
        dp[i] += required;
    }

    return min({dp[n], dp[n - 1], dp[n - 2]});
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    for (int i = 1; i <= 10; ++i)
    {
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
            long long n = 10 * (rand() % 10 + 1);
            infile << n << "\n";
            // long long arr[n];
            vector<int> arr(n);
            for (int k = 0; k < n; k++)
            {
                int m = 10 * (rand() % 10 + 1);
                arr[k] = m;

                infile << m << " ";
            }
            infile << "\n";
            int k=1*(rand()%10+1);
            infile<<k<<"\n";

            long long ans = minIncrementOperations(arr, n);
            outfile << ans << "\n";
                }
        infile.close();
        outfile.close();
    }
    return 0;
}
