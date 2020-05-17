#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int x[1000], y[1000];
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}
	int t = 0, b = 0;
	for(int i = 0; i < n-1; i++){
		if(i > 0){
			y[i] = t;
		}
		t = (y[i]-x[i+1])+y[i+1];
		if(y[i]-x[i+1] == 0 && i == 0){
			b = y[i];
		}
		b = max(b, t);
	}
	for(int i = 0; i < n; i++){
		if(y[i] > b){
			b = y[i];
		}
	}
	cout << b;
	cout << "\n";
	return 0;
}
