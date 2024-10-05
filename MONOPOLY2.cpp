#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    int s1=p+q+r;
	    int s2=q+r+s;
	    int s3=p+r+s;
	    int s4=p+q+s;
	    if(s1<s || s2<p || s3<q || s4<r)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
 return 0;
}
