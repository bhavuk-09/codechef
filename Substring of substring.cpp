#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int n=s.length();
        int c=0,res=0;
        
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[0] and s[i]!=s[n-1]){
                c++;
            }
            else c=0;
            
            res=max(res,c);
        }
        if(res==0) cout<<-1<<endl;
        else cout<<res<<endl;
    }
}
