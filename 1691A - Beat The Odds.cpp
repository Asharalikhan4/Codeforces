#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x, n, yes = 0, no = 0;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>x;
		if(x%2 == 0){
			yes++;
		}else if(x%2 == 1){
			no++;
		}
	}
	cout<<min(yes,no)<<endl;
	return;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
