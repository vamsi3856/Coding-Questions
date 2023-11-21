
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while (T--) { 
        int n,k;
        cin>>n>>k;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;
               x=a[i][j]-k;
                if(x<0)
                a[i][j]=0;
                else
                a[i][j]=x;
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
