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
  		cout << row+col-1 << ' ';
  		col++;
  	}
  	cout << '\n';
  	row++;
  }
  return 0;
}


>Test Input
4

>Test Output
1 
2 3 
3 4 5 
4 5 6 7 
