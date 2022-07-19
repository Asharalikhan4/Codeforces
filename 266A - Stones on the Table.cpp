#include<bits/stdc++.h>
using namespace std;

string s;
int a, c;

int main(){
	cin >> a >> b;
	for(int i = 0; i < a; i++){
		if(s[i] == s[i+1])
			c++;
	}
	cout<< c << endl;
	return 0;
}
