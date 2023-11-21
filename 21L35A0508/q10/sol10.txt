#include<bits/stdc++.h>
using namespace std;

int sum_of_factors(int n)
{
    int s=0,i,l=sqrt(n);
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            if(i==n/i) s+=i;
            else s+=i+(n/i);
        }
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,j;
        cin>>n;
        k=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<sum_of_factors(k)<<" ";
                k++;
            }
            cout<<endl;
        }
    }
}