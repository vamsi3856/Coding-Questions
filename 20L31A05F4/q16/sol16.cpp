#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) { 
        int i=0,j=0,m,n;
        string a,b,move="Alice";
        cin>>n>>a;
        cin>>m>>b;
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
            cout<<"Alice\n"<<j;
        }
        else{
            cout<<"Bob\n"<<i;
        }
    }
    return 0;
}
