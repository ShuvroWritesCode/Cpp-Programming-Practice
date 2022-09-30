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
  int i = 0;
  while(i < n){
  	int j = 0;
  	while(j < n){
  		cout << '*' << ' ';
  		j++;
  	}
  	cout << '\n';
  	i++;
  }
  return 0;
}

Test Input:
2
5
10
	
Test Output:
* * 
* * 

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
	
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
