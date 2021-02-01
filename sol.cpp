#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n, k, x, y;
  	cin >> n >> k >> x >> y;
  	// set position to x
  	int pos = x;
  	while (true) {
  		if (pos == y) {
				// check if the covid's positon is equal to your position
  			cout << "YES\n";
  			break;
  		} else if ((pos + k) % n == x) {
  			// check if the covid's position only goes back to itself
        cout << "NO\n";
        break;
  		} else {
  			// calculate the position of covid's jump
  			pos = (pos + k) % n;
  		}
  	}
  } 
  return 0;
}      