#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y){
	        cout<<"Bike"<<endl;
	    }
	    else if(x>y){
	        cout<<"Car"<<endl;
	    }
	    else{
	        cout<<"Same"<<endl;
	    }
	}
return 0;

}
