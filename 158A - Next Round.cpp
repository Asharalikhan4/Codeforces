#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, count(0);
	cin >> n >> k;
    vector<int> num(n,0);
	for(int i = 0; i < n; i++){
		cin>> num[i];
	}
	for(int i = 0; i < n; i++){
		if(num[i] > k){
			count += 1;
		}
	}
	cout<<count<<endl;
	return 0;
}
