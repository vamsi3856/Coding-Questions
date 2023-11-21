

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while (T--) { 
        int n,i,j;
        cin>>n;
        for(i=1;i<=n;i++){
            for(j=1;j<=3;j++){
                if((i+j)%2==0){
                    if((i!=j) and (i+j)%4==0 and i%2!=0 and j%2!=0)
                    cout<<' ';
                    else
                    cout<<'*';
                }
                else
                cout<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
