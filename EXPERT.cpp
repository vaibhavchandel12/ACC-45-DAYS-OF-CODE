#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int t= (x-y);
	    if(t<=y){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
return 0;
}
