#include<bits/stdc++.h>

using namespace std;

int32_t main() {
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
  #endif

  ios_base::sync_with_stdio(0);
  cin.tie(0); 
  cout.tie(0);

  int n; cin >> n;

  int row = 1;
  char ch = int('A');
  while(row <= n) {
  	int col = 1;
  	while(col <= n) {
  		cout << ch << ' ';
  		col++;
  		ch++;
  	}
  	ch = ch-2;
  	cout << '\n';
  	row++;
  }
  return 0;
}


>Test Input
3

>Test Output
A B C 
B C D 
C D E 
