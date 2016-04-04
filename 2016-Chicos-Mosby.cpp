#include <iostream>
using namespace std;
unsigned long long int n, m, r = 0, d, p = 10000000;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> n >> m;
	while(p != 0){
		d = 0;
		if(n > m){
		d = n / m; 
		n = n % m;
		p = n;
		}
		else {
		d = m / n;  
		m = m % n;
		p = m;
		}
		r += d;
	}
	cout << r << "\n";
	return 0;
}
