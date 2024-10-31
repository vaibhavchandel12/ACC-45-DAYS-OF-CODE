#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	     int total_points = p+ q;  // Calculate total points played so far
        
        // Determine whose serve it is based on the "serve block"
        if ((total_points / 2) % 2 == 0) {
            cout << "Alice" << endl;  // Alice serves if the serve block is even
        } else {
            cout << "Bob" << endl;  // Bob serves if the serve block is odd
        }
    }
	return 0;

}
