#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t!=0)
    {
        int n,x;
        cin>>n>>x;
        if(n==1){
            cout<<x<<endl;
        }
        else{
            double g = ceil(double(n)/6);
            cout <<g*x<<endl;
        }
        t--;
    }
    return 0;
}
