#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        int count = 0;
        if (N >= 2) {    
            count = 1;   
            N -= 2;     
            count += N / 7; 
        }
        
        cout << count << endl;
    }
    return 0;
}
