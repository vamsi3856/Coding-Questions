#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float y,z;
        int x,n=0;
        cin>>x>>y>>z;
        while(y<z)
        {
            if(x<5)  y-=(y/10.0);
            else  y+=(y*x*20)/100.0;
            x*=2;
            n++;
        }
        cout<<n<<endl;
    }
}
