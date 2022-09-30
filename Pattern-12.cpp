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
  char ch = int('A');

  int row = 1;
  while(row <= n) {
  	int col = 1;
  	while(col <= n) {
  		cout << ch << ' ';
  		col++;
  		ch++;
  	}
  	cout << '\n';
  	row++;
  }
  return 0;
}


>Test Input
3

>test Output
A B C 
D E F 
G H I 
