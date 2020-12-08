#include <iostream>
using namespace std;

int main() {
	// your code goes here'
	long long int t,a,b,i,ctr,j,k,oa,ob,ea,eb;
	cin>>t;
	for(i=0;i<t;i++){
	    ctr=0;
	    cin>>a>>b;
	    if(a%2==0){
	        oa=a/2;
	        ea=a/2;
	       }
	    else if(a%2==1){
	        oa=a/2 + 1;
	        ea=a/2;
	    }
	    
	    if(b%2==0){
	        ob=b/2;
	        eb=ob;
	    }
	    else if(b%2==1){
	        ob=b/2 + 1;
	        eb= ob-1;
	    }
	    ctr= oa*ob + ea*eb;
	    
	    cout<<ctr<<endl;
	}
	return 0;
}
