#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a=500;
	    int b=1000;
	    int c,d;
	    cin>>c>>d;
	    int sum= (a-(c*2))+(b-((c+d)*4));
	    int sum1=(b-(d*4))+(a-((c+d)*2));
	    int maxi=max(sum,sum1);
	    cout<<maxi<<endl;
	}
 return 0;
}