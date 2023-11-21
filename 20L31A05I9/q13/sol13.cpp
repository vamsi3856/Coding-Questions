

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
bool findTriplets(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {

        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                return true;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return false;
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
            int arr[n];
            
            for (int k = 0; k < n; k++)
            {
                int m = 10 * (rand() % 10 + 1);
                if(k%10 && j%5) m = -m;
                arr[k] = m;

                infile << m << " ";
            }
            infile << "\n";

            long long int ans = findTriplets(arr, n);
            outfile << ans << "\n";
        }
        infile.close();
        outfile.close();
    }
    return 0;
}
