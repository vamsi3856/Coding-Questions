
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
void merge(long long arr[], long long N, long long low, long long high, long long mid, long long int &count)
{

    vector<long long> v;

    long long i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {

        if (arr[i] <= arr[j])
        {
            v.push_back(arr[i++]);
        }
        else
        {
            count += mid - i + 1;
            v.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        v.push_back(arr[j]);
        j++;
    }
    long long k = low;
    for (long long l = 0; l < v.size(); l++)
    {
        arr[k++] = v[l];
    }
}
void merge_sort(long long arr[], long long N, long long low, long long high, long long int &count)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    merge_sort(arr, N, low, mid, count);
    merge_sort(arr, N, mid + 1, high, count);
    merge(arr, N, low, high, mid, count);
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count = 0;

    merge_sort(arr, N, 0, N - 1, count);

    return count;
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
            long long arr[n];
            for (int k = 0; k < n; k++)
            {
                int m = 10 * (rand() % 10 + 1);
                arr[k] = m;

                infile << m << " ";
            }
            infile << "\n";

            long long int ans = inversionCount(arr, n);
            outfile << ans << "\n";
        }
        infile.close();
        outfile.close();
    }
    return 0;
}
