#include <bits/stdc++.h>
using namespace std;
long long M, N, actCol, actFil, finF, finC, A, D, T=0;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> M >> N;
	cin >> A >> D;
	cin >> finF >> finC;
	actFil = M / __gcd(M,A);
	actCol = N / __gcd(N,D);
	if(actCol > actFil) T = actFil * actCol  / __gcd(actCol,actFil);
	else T = actFil * actCol  / __gcd(actFil,actCol);
				cout << T << "\n";		
	return 0;
}
