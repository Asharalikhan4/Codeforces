#include<bits/stdc++.h>
using namespace std;

int main(){
	int num, Petya, Vasya, Tonya, count(0);
	cin>> num;
	for(int i = 0; i < num; ++i){
	cin>> Petya >> Vasya >> Tonya;
	if(Petya + Vasya + Tonya >= 2){
		count += 1;
	}
}
	cout<<count<<endl;
}
