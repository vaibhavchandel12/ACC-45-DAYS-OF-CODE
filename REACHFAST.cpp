#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,k;
	    cin>>a>>b>>k;
	    if(a==b){
	        cout<<"0"<<endl;
	    }else{
	     int d=abs(a-b);
	     int c=(d+k-1)/k;
	     cout<<c<<endl;
	    }
	}
	return 0;

}
