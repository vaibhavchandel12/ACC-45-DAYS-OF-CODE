#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int s=a+b+c;
	    if(s==0 || s==1){
	        cout<<"Water filling time"<<endl;
	    }
	    else{
	        cout<<"Not now"<<endl;
	    }
	}
	
return 0;
}
