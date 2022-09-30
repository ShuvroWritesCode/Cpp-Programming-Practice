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
  while(row <= n){
  	int col = 1;
  	while(col <= row){
  		cout << row-col+1 << ' ';
  		col++;
  	}
  	cout << '\n';
  	row++;
  }
  return 0;
}


>Test Input
3

>Test Input
1
2 1 
3 2 1 
